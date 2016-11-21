/* This file is part of the KDE project
   Copyright (C) 2003-2016 Jarosław Staniek <staniek@kde.org>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
*/

#include "KexiFileFilters.h"
#include <core/KexiMainWindowIface.h>
#include <core/KexiMigrateManagerInterface.h>

#include <QMimeDatabase>
#include <QMimeType>
#include <QSet>

#include <KDb>

//! @internal
class Q_DECL_HIDDEN KexiFileFilters::Private
{
public:
    Private() {}

    void update()
    {
        if (filtersUpdated) {
            return;
        }
        filtersUpdated = true;
        mimeTypes.clear();

        if (mode == KexiFileFilters::Opening || mode == KexiFileFilters::SavingFileBasedDB) {
            addMimeType(KDb::defaultFileBasedDriverMimeType());
        }
        if (mode == KexiFileFilters::Opening || mode == KexiFileFilters::SavingServerBasedDB) {
            addMimeType("application/x-kexiproject-shortcut");
        }
        if (mode == KexiFileFilters::Opening || mode == KexiFileFilters::SavingServerBasedDB) {
            addMimeType("application/x-kexi-connectiondata");
        }

        if (mode == KexiFileFilters::Opening) {
            const QStringList supportedFileMimeTypes = KexiMainWindowIface::global()->migrateManager()->supportedFileMimeTypes();
            foreach (const QString& supportedFileMimeType, supportedFileMimeTypes) {
                addMimeType(supportedFileMimeType);
            }
        }

        foreach(const QString& mimeName, additionalMimeTypes) {
            if (mimeName == "all/allfiles") {
                continue;
            }
            addMimeType(mimeName);
        }
    }

    QMimeDatabase db;
    KexiFileFilters::Mode mode = KexiFileFilters::Opening;
    QList<QMimeType> mimeTypes;
    QStringList comments;
    QSet<QString> additionalMimeTypes;
    QSet<QString> excludedMimeTypes;
    QString defaultFilter;
    bool filtersUpdated = false;

private:
    bool addMimeType(const QString &mimeName)
    {
        const QMimeType mime = db.mimeTypeForName(mimeName);
        if (mime.isValid() && !excludedMimeTypes.contains(mime.name().toLower())) {
            mimeTypes += mime;
            return true;
        }
        return false;
    }
    /*! Adds file dialog-compatible filter to @a filter and patterns to @allfilters based on
        @a mimeName mime type name. Does nothing if excludedMimeTypes contains this mime name. */
    //! @todo ?
    /*
    bool addFilterForType(QStringList *allfilters, const QString &mimeName)
    {
        QMimeDatabase db;
        const QMimeType mime = db.mimeTypeForName(mimeName);
        if (mime.isValid() && !excludedMimeTypes.contains(mime.name().toLower())) {
            filters += mime.filterString(); // KexiUtils::fileDialogFilterString(mime);
            *allfilters += mime.globPatterns();
            return true;
        }
        return false;
    }*/
};

KexiFileFilters::KexiFileFilters()
 : d(new Private)
{
}

KexiFileFilters::~KexiFileFilters()
{
    delete d;
}

KexiFileFilters::Mode KexiFileFilters::mode() const
{
    return d->mode;
}

void KexiFileFilters::setMode(Mode mode)
{
    d->mode = mode;
    d->filtersUpdated = false;
}

void KexiFileFilters::setDefaultFilter(const QString &filter)
{
    d->defaultFilter = filter;
}

QString KexiFileFilters::defaultFilter() const
{
    return d->defaultFilter;
}

QStringList KexiFileFilters::additionalMimeTypes() const
{
    return d->additionalMimeTypes.toList();
}

void KexiFileFilters::setAdditionalMimeTypes(const QStringList &mimeTypes)
{
    //delayed
    d->additionalMimeTypes = mimeTypes.toSet();
    d->filtersUpdated = false;
}

QStringList KexiFileFilters::excludedMimeTypes() const
{
    return d->excludedMimeTypes.toList();
}

void KexiFileFilters::setExcludedMimeTypes(const QStringList &mimeTypes)
{
    //delayed
    d->excludedMimeTypes.clear();
    //convert to lowercase
    for(const QString& mimeType : mimeTypes) {
        d->excludedMimeTypes.insert(mimeType.toLower());
    }
    d->filtersUpdated = false;
}

//static
QString KexiFileFilters::separator(KexiFileFilters::Format format)
{
    return format == KexiFileFilters::QtFormat ? QStringLiteral(";;") : QStringLiteral("\n");
}

QString KexiFileFilters::toString(Format format) const
{
    QString result;
    d->update();
    const QString separator(KexiFileFilters::separator(format));
    QStringList allPatterns;
    for(const QMimeType &mimeType : d->mimeTypes) {
        if (!result.isEmpty()) {
            result += separator;
        }
        result += KexiFileFilters::toString(mimeType, format);
        allPatterns += mimeType.globPatterns();
    }

    if (!d->defaultFilter.isEmpty() && !d->excludedMimeTypes.contains("all/allfiles")) {
        if (!result.isEmpty()) {
            result += separator;
        }
        result += d->defaultFilter;
    }

    //remove duplicates made because upper- and lower-case extenstions are used:
    QStringList allPatternsUnique = allPatterns.toSet().toList();
    qSort(allPatternsUnique);

    if (allPatternsUnique.count() > 1) {//prepend "all supoported files" entry
        if (!result.isEmpty()) {
            result.prepend(separator);
        }
        result.prepend(KexiFileFilters::toString(allPatternsUnique,
            xi18n("All Supported Files"), format));
    }
    return result;
}

//static
QString KexiFileFilters::toString(const QStringList &patterns, const QString &comment, Format format)
{
    QString str;
    if (format == KDEFormat || format == KUrlRequesterFormat) {
        str += patterns.join(QStringLiteral(" ")) + QStringLiteral("|");
    }
    str += comment;
    if (format == QtFormat || format == KDEFormat) {
        str += QStringLiteral(" (");
        if (patterns.isEmpty()) {
            str += QStringLiteral("*");
        } else {
#ifdef Q_OS_WIN
            str += patterns.join(";");
#else
            str += QLocale().createSeparatedList(patterns);
#endif
            str += ")";
        }
    }
    return str;
}

//static
QString KexiFileFilters::toString(const QMimeType &mime, Format format)
{
    if (!mime.isValid()) {
        return QString();
    }

    if (format == QtFormat) {
        return mime.filterString();
    }

    QString str;
    QStringList patterns(mime.globPatterns());
    if (patterns.isEmpty()) {
        patterns += QStringLiteral("*");
    }
    return toString(patterns, mime.comment(), format);
}

//static
QString KexiFileFilters::toString(const QString& mimeName, Format format)
{
    QMimeDatabase db;
    return KexiFileFilters::toString(db.mimeTypeForName(mimeName), format);
}

//static
QString KexiFileFilters::toString(const QStringList& mimeNames, Format format)
{
    QString result;
    const QString separator(KexiFileFilters::separator(format));
    for(const QString &mimeName : mimeNames) {
        if (!result.isEmpty()) {
            result += separator;
        }
        result += KexiFileFilters::toString(mimeName, format);
    }
    return result;
}
