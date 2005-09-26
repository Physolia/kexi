/***************************************************************************
 * pythoninterpreter.h
 * This file is part of the KDE project
 * copyright (C)2004-2005 by Sebastian Sauer (mail@dipe.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 * You should have received a copy of the GNU Library General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 ***************************************************************************/

#ifndef KROSS_PYTHON_INTERPRETER_H
#define KROSS_PYTHON_INTERPRETER_H

#include "pythonconfig.h"
#include "../api/object.h"
#include "../api/interpreter.h"
#include "../main/manager.h"
//#include "../api/script.h"
#include "../main/scriptcontainer.h"

#include <qstring.h>
#include <kdebug.h>

namespace Kross { namespace Python {

    // Forward declarations.
    class PythonSecurity;
    class PythonModule;
    class PythonInterpreterPrivate;

    /**
     * Python interpreter bridge.
     *
     * Implements an \a Kross::Api::Interpreter for the python
     * interpreter.
     */
    class PythonInterpreter : public Kross::Api::Interpreter
    {
        public:

            /**
             * Constructor.
             */
            PythonInterpreter(const QString& interpretername);

            /**
             * Destructor.
             */
            virtual ~PythonInterpreter();

            /**
             * Return a list of mimetypes the Python-Interpreter supports.
             * See \see Kross::Api::Interpreter::execute
             */
            virtual const QStringList mimeTypes();

            /**
             * \return a \a PythonScript instance.
             */
            virtual Kross::Api::Script* createScript(Kross::Api::ScriptContainer* scriptcontainer);

            /**
             * \return the \a MainModule instance.
             */
            PythonModule* mainModule();

        private:
            /// Internal d-pointer class.
            PythonInterpreterPrivate* d;

            inline void initialize();
            inline void finalize();
    };

}}

#endif
