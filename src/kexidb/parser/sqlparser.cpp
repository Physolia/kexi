/* A Bison parser, made from sqlparser.y, by GNU bison 1.75.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SQL_TYPE = 258,
     SQL_ABS = 259,
     ACOS = 260,
     AMPERSAND = 261,
     SQL_ABSOLUTE = 262,
     ADA = 263,
     ADD = 264,
     ADD_DAYS = 265,
     ADD_HOURS = 266,
     ADD_MINUTES = 267,
     ADD_MONTHS = 268,
     ADD_SECONDS = 269,
     ADD_YEARS = 270,
     ALL = 271,
     ALLOCATE = 272,
     ALTER = 273,
     AND = 274,
     ANY = 275,
     ARE = 276,
     AS = 277,
     ASIN = 278,
     ASC = 279,
     ASCII = 280,
     ASSERTION = 281,
     ATAN = 282,
     ATAN2 = 283,
     AUTHORIZATION = 284,
     AUTO_INCREMENT = 285,
     AVG = 286,
     BEFORE = 287,
     SQL_BEGIN = 288,
     BETWEEN = 289,
     BIGINT = 290,
     BINARY = 291,
     BIT = 292,
     BIT_LENGTH = 293,
     BREAK = 294,
     BY = 295,
     CASCADE = 296,
     CASCADED = 297,
     CASE = 298,
     CAST = 299,
     CATALOG = 300,
     CEILING = 301,
     CENTER = 302,
     SQL_CHAR = 303,
     CHAR_LENGTH = 304,
     CHARACTER_STRING_LITERAL = 305,
     CHECK = 306,
     CLOSE = 307,
     COALESCE = 308,
     COBOL = 309,
     COLLATE = 310,
     COLLATION = 311,
     COLUMN = 312,
     COMMIT = 313,
     COMPUTE = 314,
     CONCAT = 315,
     CONNECT = 316,
     CONNECTION = 317,
     CONSTRAINT = 318,
     CONSTRAINTS = 319,
     CONTINUE = 320,
     CONVERT = 321,
     CORRESPONDING = 322,
     COS = 323,
     COT = 324,
     COUNT = 325,
     CREATE = 326,
     CURDATE = 327,
     CURRENT = 328,
     CURRENT_DATE = 329,
     CURRENT_TIME = 330,
     CURRENT_TIMESTAMP = 331,
     CURTIME = 332,
     CURSOR = 333,
     DATABASE = 334,
     SQL_DATE = 335,
     DATE_FORMAT = 336,
     DATE_REMAINDER = 337,
     DATE_VALUE = 338,
     DAY = 339,
     DAYOFMONTH = 340,
     DAYOFWEEK = 341,
     DAYOFYEAR = 342,
     DAYS_BETWEEN = 343,
     DEALLOCATE = 344,
     DEC = 345,
     DECLARE = 346,
     DEFAULT = 347,
     DEFERRABLE = 348,
     DEFERRED = 349,
     SQL_DELETE = 350,
     DESC = 351,
     DESCRIBE = 352,
     DESCRIPTOR = 353,
     DIAGNOSTICS = 354,
     DICTIONARY = 355,
     DIRECTORY = 356,
     DISCONNECT = 357,
     DISPLACEMENT = 358,
     DISTINCT = 359,
     DOMAIN_TOKEN = 360,
     SQL_DOUBLE = 361,
     DOUBLE_QUOTED_STRING = 362,
     DROP = 363,
     ELSE = 364,
     END = 365,
     END_EXEC = 366,
     EQUAL = 367,
     ESCAPE = 368,
     EXCEPT = 369,
     SQL_EXCEPTION = 370,
     EXEC = 371,
     EXECUTE = 372,
     EXISTS = 373,
     EXP = 374,
     EXPONENT = 375,
     EXTERNAL = 376,
     EXTRACT = 377,
     SQL_FALSE = 378,
     FETCH = 379,
     FIRST = 380,
     SQL_FLOAT = 381,
     FLOOR = 382,
     FN = 383,
     FOR = 384,
     FOREIGN = 385,
     FORTRAN = 386,
     FOUND = 387,
     FOUR_DIGITS = 388,
     FROM = 389,
     FULL = 390,
     GET = 391,
     GLOBAL = 392,
     GO = 393,
     GOTO = 394,
     GRANT = 395,
     GREATER_OR_EQUAL = 396,
     GREATER_THAN = 397,
     GROUP = 398,
     HAVING = 399,
     HOUR = 400,
     HOURS_BETWEEN = 401,
     IDENTITY = 402,
     IFNULL = 403,
     SQL_IGNORE = 404,
     IMMEDIATE = 405,
     SQL_IN = 406,
     INCLUDE = 407,
     INDEX = 408,
     INDICATOR = 409,
     INITIALLY = 410,
     INNER = 411,
     INPUT = 412,
     INSENSITIVE = 413,
     INSERT = 414,
     INTEGER = 415,
     INTERSECT = 416,
     INTERVAL = 417,
     INTO = 418,
     IS = 419,
     ISOLATION = 420,
     JOIN = 421,
     JUSTIFY = 422,
     KEY = 423,
     LANGUAGE = 424,
     LAST = 425,
     LCASE = 426,
     LEFT = 427,
     LENGTH = 428,
     LESS_OR_EQUAL = 429,
     LESS_THAN = 430,
     LEVEL = 431,
     LIKE = 432,
     LINE_WIDTH = 433,
     LOCAL = 434,
     LOCATE = 435,
     LOG = 436,
     SQL_LONG = 437,
     LOWER = 438,
     LTRIM = 439,
     LTRIP = 440,
     MATCH = 441,
     SQL_MAX = 442,
     MICROSOFT = 443,
     SQL_MIN = 444,
     MINUS = 445,
     MINUTE = 446,
     MINUTES_BETWEEN = 447,
     MOD = 448,
     MODIFY = 449,
     MODULE = 450,
     MONTH = 451,
     MONTHS_BETWEEN = 452,
     MUMPS = 453,
     NAMES = 454,
     NATIONAL = 455,
     NCHAR = 456,
     NEXT = 457,
     NODUP = 458,
     NONE = 459,
     NOT = 460,
     NOT_EQUAL = 461,
     NOW = 462,
     SQL_NULL = 463,
     NULLIF = 464,
     NUMERIC = 465,
     OCTET_LENGTH = 466,
     ODBC = 467,
     OF = 468,
     SQL_OFF = 469,
     SQL_ON = 470,
     ONLY = 471,
     OPEN = 472,
     OPTION = 473,
     OR = 474,
     ORDER = 475,
     OUTER = 476,
     OUTPUT = 477,
     OVERLAPS = 478,
     PAGE = 479,
     PARTIAL = 480,
     SQL_PASCAL = 481,
     PERSISTENT = 482,
     CQL_PI = 483,
     PLI = 484,
     POSITION = 485,
     PRECISION = 486,
     PREPARE = 487,
     PRESERVE = 488,
     PRIMARY = 489,
     PRIOR = 490,
     PRIVILEGES = 491,
     PROCEDURE = 492,
     PRODUCT = 493,
     PUBLIC = 494,
     QUARTER = 495,
     QUIT = 496,
     RAND = 497,
     READ_ONLY = 498,
     REAL = 499,
     REFERENCES = 500,
     REPEAT = 501,
     REPLACE = 502,
     RESTRICT = 503,
     REVOKE = 504,
     RIGHT = 505,
     ROLLBACK = 506,
     ROWS = 507,
     RPAD = 508,
     RTRIM = 509,
     SCHEMA = 510,
     SCREEN_WIDTH = 511,
     SCROLL = 512,
     SECOND = 513,
     SECONDS_BETWEEN = 514,
     SELECT = 515,
     SEQUENCE = 516,
     SETOPT = 517,
     SET = 518,
     SHOWOPT = 519,
     SIGN = 520,
     INTEGER_CONST = 521,
     REAL_CONST = 522,
     SIN = 523,
     SQL_SIZE = 524,
     SMALLINT = 525,
     SOME = 526,
     SPACE = 527,
     SQL = 528,
     SQL_TRUE = 529,
     SQLCA = 530,
     SQLCODE = 531,
     SQLERROR = 532,
     SQLSTATE = 533,
     SQLWARNING = 534,
     SQRT = 535,
     STDEV = 536,
     SUBSTRING = 537,
     SUM = 538,
     SYSDATE = 539,
     SYSDATE_FORMAT = 540,
     SYSTEM = 541,
     TABLE = 542,
     TAN = 543,
     TEMPORARY = 544,
     THEN = 545,
     THREE_DIGITS = 546,
     TIME = 547,
     TIMESTAMP = 548,
     TIMEZONE_HOUR = 549,
     TIMEZONE_MINUTE = 550,
     TINYINT = 551,
     TO = 552,
     TO_CHAR = 553,
     TO_DATE = 554,
     TRANSACTION = 555,
     TRANSLATE = 556,
     TRANSLATION = 557,
     TRUNCATE = 558,
     GENERAL_TITLE = 559,
     TWO_DIGITS = 560,
     UCASE = 561,
     UNION = 562,
     UNIQUE = 563,
     SQL_UNKNOWN = 564,
     UPDATE = 565,
     UPPER = 566,
     USAGE = 567,
     USER = 568,
     IDENTIFIER = 569,
     IDENTIFIER_DOT_ASTERISK = 570,
     ERROR_DIGIT_BEFORE_IDENTIFIER = 571,
     USING = 572,
     VALUE = 573,
     VALUES = 574,
     VARBINARY = 575,
     VARCHAR = 576,
     VARYING = 577,
     VENDOR = 578,
     VIEW = 579,
     WEEK = 580,
     WHEN = 581,
     WHENEVER = 582,
     WHERE = 583,
     WHERE_CURRENT_OF = 584,
     WITH = 585,
     WORD_WRAPPED = 586,
     WORK = 587,
     WRAPPED = 588,
     YEAR = 589,
     YEARS_BETWEEN = 590,
     SIMILAR = 591,
     ILIKE = 592
   };
#endif
#define SQL_TYPE 258
#define SQL_ABS 259
#define ACOS 260
#define AMPERSAND 261
#define SQL_ABSOLUTE 262
#define ADA 263
#define ADD 264
#define ADD_DAYS 265
#define ADD_HOURS 266
#define ADD_MINUTES 267
#define ADD_MONTHS 268
#define ADD_SECONDS 269
#define ADD_YEARS 270
#define ALL 271
#define ALLOCATE 272
#define ALTER 273
#define AND 274
#define ANY 275
#define ARE 276
#define AS 277
#define ASIN 278
#define ASC 279
#define ASCII 280
#define ASSERTION 281
#define ATAN 282
#define ATAN2 283
#define AUTHORIZATION 284
#define AUTO_INCREMENT 285
#define AVG 286
#define BEFORE 287
#define SQL_BEGIN 288
#define BETWEEN 289
#define BIGINT 290
#define BINARY 291
#define BIT 292
#define BIT_LENGTH 293
#define BREAK 294
#define BY 295
#define CASCADE 296
#define CASCADED 297
#define CASE 298
#define CAST 299
#define CATALOG 300
#define CEILING 301
#define CENTER 302
#define SQL_CHAR 303
#define CHAR_LENGTH 304
#define CHARACTER_STRING_LITERAL 305
#define CHECK 306
#define CLOSE 307
#define COALESCE 308
#define COBOL 309
#define COLLATE 310
#define COLLATION 311
#define COLUMN 312
#define COMMIT 313
#define COMPUTE 314
#define CONCAT 315
#define CONNECT 316
#define CONNECTION 317
#define CONSTRAINT 318
#define CONSTRAINTS 319
#define CONTINUE 320
#define CONVERT 321
#define CORRESPONDING 322
#define COS 323
#define COT 324
#define COUNT 325
#define CREATE 326
#define CURDATE 327
#define CURRENT 328
#define CURRENT_DATE 329
#define CURRENT_TIME 330
#define CURRENT_TIMESTAMP 331
#define CURTIME 332
#define CURSOR 333
#define DATABASE 334
#define SQL_DATE 335
#define DATE_FORMAT 336
#define DATE_REMAINDER 337
#define DATE_VALUE 338
#define DAY 339
#define DAYOFMONTH 340
#define DAYOFWEEK 341
#define DAYOFYEAR 342
#define DAYS_BETWEEN 343
#define DEALLOCATE 344
#define DEC 345
#define DECLARE 346
#define DEFAULT 347
#define DEFERRABLE 348
#define DEFERRED 349
#define SQL_DELETE 350
#define DESC 351
#define DESCRIBE 352
#define DESCRIPTOR 353
#define DIAGNOSTICS 354
#define DICTIONARY 355
#define DIRECTORY 356
#define DISCONNECT 357
#define DISPLACEMENT 358
#define DISTINCT 359
#define DOMAIN_TOKEN 360
#define SQL_DOUBLE 361
#define DOUBLE_QUOTED_STRING 362
#define DROP 363
#define ELSE 364
#define END 365
#define END_EXEC 366
#define EQUAL 367
#define ESCAPE 368
#define EXCEPT 369
#define SQL_EXCEPTION 370
#define EXEC 371
#define EXECUTE 372
#define EXISTS 373
#define EXP 374
#define EXPONENT 375
#define EXTERNAL 376
#define EXTRACT 377
#define SQL_FALSE 378
#define FETCH 379
#define FIRST 380
#define SQL_FLOAT 381
#define FLOOR 382
#define FN 383
#define FOR 384
#define FOREIGN 385
#define FORTRAN 386
#define FOUND 387
#define FOUR_DIGITS 388
#define FROM 389
#define FULL 390
#define GET 391
#define GLOBAL 392
#define GO 393
#define GOTO 394
#define GRANT 395
#define GREATER_OR_EQUAL 396
#define GREATER_THAN 397
#define GROUP 398
#define HAVING 399
#define HOUR 400
#define HOURS_BETWEEN 401
#define IDENTITY 402
#define IFNULL 403
#define SQL_IGNORE 404
#define IMMEDIATE 405
#define SQL_IN 406
#define INCLUDE 407
#define INDEX 408
#define INDICATOR 409
#define INITIALLY 410
#define INNER 411
#define INPUT 412
#define INSENSITIVE 413
#define INSERT 414
#define INTEGER 415
#define INTERSECT 416
#define INTERVAL 417
#define INTO 418
#define IS 419
#define ISOLATION 420
#define JOIN 421
#define JUSTIFY 422
#define KEY 423
#define LANGUAGE 424
#define LAST 425
#define LCASE 426
#define LEFT 427
#define LENGTH 428
#define LESS_OR_EQUAL 429
#define LESS_THAN 430
#define LEVEL 431
#define LIKE 432
#define LINE_WIDTH 433
#define LOCAL 434
#define LOCATE 435
#define LOG 436
#define SQL_LONG 437
#define LOWER 438
#define LTRIM 439
#define LTRIP 440
#define MATCH 441
#define SQL_MAX 442
#define MICROSOFT 443
#define SQL_MIN 444
#define MINUS 445
#define MINUTE 446
#define MINUTES_BETWEEN 447
#define MOD 448
#define MODIFY 449
#define MODULE 450
#define MONTH 451
#define MONTHS_BETWEEN 452
#define MUMPS 453
#define NAMES 454
#define NATIONAL 455
#define NCHAR 456
#define NEXT 457
#define NODUP 458
#define NONE 459
#define NOT 460
#define NOT_EQUAL 461
#define NOW 462
#define SQL_NULL 463
#define NULLIF 464
#define NUMERIC 465
#define OCTET_LENGTH 466
#define ODBC 467
#define OF 468
#define SQL_OFF 469
#define SQL_ON 470
#define ONLY 471
#define OPEN 472
#define OPTION 473
#define OR 474
#define ORDER 475
#define OUTER 476
#define OUTPUT 477
#define OVERLAPS 478
#define PAGE 479
#define PARTIAL 480
#define SQL_PASCAL 481
#define PERSISTENT 482
#define CQL_PI 483
#define PLI 484
#define POSITION 485
#define PRECISION 486
#define PREPARE 487
#define PRESERVE 488
#define PRIMARY 489
#define PRIOR 490
#define PRIVILEGES 491
#define PROCEDURE 492
#define PRODUCT 493
#define PUBLIC 494
#define QUARTER 495
#define QUIT 496
#define RAND 497
#define READ_ONLY 498
#define REAL 499
#define REFERENCES 500
#define REPEAT 501
#define REPLACE 502
#define RESTRICT 503
#define REVOKE 504
#define RIGHT 505
#define ROLLBACK 506
#define ROWS 507
#define RPAD 508
#define RTRIM 509
#define SCHEMA 510
#define SCREEN_WIDTH 511
#define SCROLL 512
#define SECOND 513
#define SECONDS_BETWEEN 514
#define SELECT 515
#define SEQUENCE 516
#define SETOPT 517
#define SET 518
#define SHOWOPT 519
#define SIGN 520
#define INTEGER_CONST 521
#define REAL_CONST 522
#define SIN 523
#define SQL_SIZE 524
#define SMALLINT 525
#define SOME 526
#define SPACE 527
#define SQL 528
#define SQL_TRUE 529
#define SQLCA 530
#define SQLCODE 531
#define SQLERROR 532
#define SQLSTATE 533
#define SQLWARNING 534
#define SQRT 535
#define STDEV 536
#define SUBSTRING 537
#define SUM 538
#define SYSDATE 539
#define SYSDATE_FORMAT 540
#define SYSTEM 541
#define TABLE 542
#define TAN 543
#define TEMPORARY 544
#define THEN 545
#define THREE_DIGITS 546
#define TIME 547
#define TIMESTAMP 548
#define TIMEZONE_HOUR 549
#define TIMEZONE_MINUTE 550
#define TINYINT 551
#define TO 552
#define TO_CHAR 553
#define TO_DATE 554
#define TRANSACTION 555
#define TRANSLATE 556
#define TRANSLATION 557
#define TRUNCATE 558
#define GENERAL_TITLE 559
#define TWO_DIGITS 560
#define UCASE 561
#define UNION 562
#define UNIQUE 563
#define SQL_UNKNOWN 564
#define UPDATE 565
#define UPPER 566
#define USAGE 567
#define USER 568
#define IDENTIFIER 569
#define IDENTIFIER_DOT_ASTERISK 570
#define ERROR_DIGIT_BEFORE_IDENTIFIER 571
#define USING 572
#define VALUE 573
#define VALUES 574
#define VARBINARY 575
#define VARCHAR 576
#define VARYING 577
#define VENDOR 578
#define VIEW 579
#define WEEK 580
#define WHEN 581
#define WHENEVER 582
#define WHERE 583
#define WHERE_CURRENT_OF 584
#define WITH 585
#define WORD_WRAPPED 586
#define WORK 587
#define WRAPPED 588
#define YEAR 589
#define YEARS_BETWEEN 590
#define SIMILAR 591
#define ILIKE 592




/* Copy the first part of user declarations.  */
#line 404 "sqlparser.y"

#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <assert.h>

#ifdef _WIN32
# include <malloc.h>
#endif

#include <qobject.h>
#include <kdebug.h>
#include <klocale.h>
#include <qptrlist.h>
#include <qcstring.h>

#include <connection.h>
#include <queryschema.h>
#include <field.h>
#include <tableschema.h>

#include "parser.h"
//#include "sqlparser.h"
#include "sqltypes.h"

//	using namespace std;
	using namespace KexiDB;

#define YY_NO_UNPUT
#define YYSTACK_USE_ALLOCA 1
#define YYMAXDEPTH 255

Parser *parser;
KexiDB::Field *field;
bool requiresTable;
QPtrList<KexiDB::Field> fieldList;
//	QPtrList<KexiDB::TableSchema> tableList;
//	QDict<KexiDB::TableSchema> tableDict;
//	KexiDB::TableSchema *dummy = 0;
int current = 0;
QString ctoken = "";

int yyparse();
int yylex();
void tokenize(const char *data);

void yyerror(const char *str)
{
	kdDebug() << "error: " << str << endl;
	kdDebug() << "at character " << current << " near tooken " << ctoken << endl;
	parser->setOperation(KexiDB::Parser::OP_Error);

	if (parser->error().type().isEmpty() 
		&& (strlen(str)==0 
		|| qstricmp(str, "syntax error")==0 || qstricmp(str, "parse error")==0))
	{
		kdDebug() << parser->statement() << endl;
		QString ptrline = "";
		for(int i=0; i < current; i++)
			ptrline += " ";

		ptrline += "^";

		kdDebug() << ptrline << endl;

		//lexer may add error messages
		QString lexerErr = parser->error().error();
		if (!lexerErr.isEmpty())
			lexerErr.prepend(": ");
			
		KexiDB::ParserError err(i18n("Syntax Error"), i18n("Syntax Error near \"%1\"").arg(ctoken)+lexerErr, ctoken, current);
		parser->setError(err);
	}
}

void setError(const QString& errName, const QString& errDesc)
{
	parser->setError( KexiDB::ParserError(errName, errDesc, ctoken, current) );
	yyerror(errName.latin1());
}

void setError(const QString& errDesc)
{
	setError("", errDesc);
}

void tableNotFoundError(const QString& tableName)
{
	setError( i18n("Table not found"), i18n("Unknown table \"%1\"").arg(tableName) );
}

bool parseData(KexiDB::Parser *p, const char *data)
{
/* todo: remove dummy */
//		if (!dummy)
			//dummy = new KexiDB::TableSchema();
/* todo: make this REENTRANT */
	parser = p;
	parser->clear();
	field = 0;
	fieldList.clear();
	requiresTable = false;

	if (!data) {
		KexiDB::ParserError err(i18n("Error"), i18n("No query specified"), ctoken, current);
		parser->setError(err);
		yyerror("");
		parser = 0;
		return false;
	}

	tokenize(data);
	if (!parser->error().type().isEmpty()) {
		parser = 0;
		return false;
	}
	yyparse();

	bool ok = true;
	if(parser->operation() == KexiDB::Parser::OP_Select)
	{
		kdDebug() << "parseData(): ok" << endl;
//			kdDebug() << "parseData(): " << tableDict.count() << " loaded tables" << endl;
/*			KexiDB::TableSchema *ts;
			for(QDictIterator<KexiDB::TableSchema> it(tableDict); KexiDB::TableSchema *s = tableList.first(); s; s = tableList.next())
			{
				kdDebug() << "  " << s->name() << endl;
			}*/
/*removed
			KexiDB::Field::ListIterator it = parser->select()->fieldsIterator();
			for(KexiDB::Field *item; (item = it.current()); ++it)
			{
				if(tableList.findRef(item->table()) == -1)
				{
					KexiDB::ParserError err(i18n("Field List Error"), i18n("Unknown table '%1' in field list").arg(item->table()->name()), ctoken, current);
					parser->setError(err);

					yyerror("fieldlisterror");
					ok = false;
				}
			}*/
			//take the dummy table out of the query
//			parser->select()->removeTable(dummy);
	}
	else {
		ok = false;
	}

//		tableDict.clear();
	parser = 0;
	return ok;
}

	
/* Adds \a column to \a querySchema. \a column can be in a form of
 table.field, tableAlias.field or field
*/
bool addColumn( QuerySchema *querySchema, BaseExpr* column )
{
	VariableExpr *v_e = dynamic_cast<VariableExpr*>(column);
	if (column->exprClass() != KexiDBExpr_Variable || !v_e) {
		//err
		return false;
	}
	QString varName = v_e->name;
	kdDebug() << "found variable name: " << varName << endl;
	int dotPos = varName.find('.');
	QString tableName, fieldName;
//TODO: shall we also support db name?
	if (dotPos>0) {
		tableName = varName.left(dotPos);
		fieldName = varName.mid(dotPos+1);
	}
	if (tableName.isEmpty()) {//fieldname only
		fieldName = varName;
		if (fieldName=="*") {
			querySchema->addAsterisk( new KexiDB::QueryAsterisk(parser->select()) );
		}
		else {
			//find first table that has this field
			Field *firstField = 0;
			for (TableSchema::ListIterator it(*querySchema->tables()); it.current(); ++it) {
				Field *f = it.current()->field(fieldName);
				if (f) {
					if (!firstField) {
						firstField = f;
					} else if (f->table()!=firstField->table()) {
						//ambiguous field name
						setError(i18n("Ambiguous field name"), 
							i18n("Both table \"%1\" and \"%2\" have defined \"%3\" field. "
								"Use \"<tableName>.%4\" notation to specify table name.")
								.arg(firstField->table()->name()).arg(f->table()->name())
								.arg(fieldName).arg(fieldName));
						return false;
					}
				}
				if (!firstField) {
						setError(i18n("Field not found"), 
							i18n("Table containing \"%1\" field not found").arg(fieldName));
						return false;
				}
				//ok
				querySchema->addField(firstField);
			}
		}
	}
	else {//table.fieldname or tableAlias.fieldname
		tableName = tableName.lower();
		KexiDB::TableSchema *ts = querySchema->table( tableName );
		if (ts) {//table.fieldname
			//check if "table" is covered by an alias
			const QValueList<int> tPositions = querySchema->tablePositions(tableName);
			QValueList<int>::ConstIterator it = tPositions.begin();
			QCString tableAlias;
			bool covered = true;
			for (; it!=tPositions.end() && covered; ++it) {
				tableAlias = querySchema->tableAlias(*it);
				if (tableAlias.isEmpty() || tableAlias.lower()==tableName.latin1())
					covered = false; //uncovered
				kdDebug() << " --" << "covered by " << tableAlias << " alias" << endl;
			}
			if (covered) {
				setError(i18n("Could not access the table directly using its name"), 
					i18n("Table \"%1\" is covered by aliases. Instead of \"%2\", "
					"you can write \"%3\"").arg(tableName)
					.arg(tableName+"."+fieldName).arg(tableAlias+"."+fieldName.latin1()));
				return false;
			}
		}
		
		int tablePosition = -1;
		if (!ts) {//try to find tableAlias
			tablePosition = querySchema->tablePositionForAlias( tableName.latin1() );
			if (tablePosition>=0) {
				ts = querySchema->tables()->at(tablePosition);
				if (ts)
					kdDebug() << " --it's a tableAlias.name" << endl;
			}
		}
		
		if (ts) {
			if (fieldName=="*") {
				querySchema->addAsterisk( new KexiDB::QueryAsterisk(parser->select(), ts) );
			}
			else {
				kdDebug() << " --it's a table.name" << endl;
				KexiDB::Field *realField = ts->field(fieldName);
				if (realField) {
					querySchema->addField(realField, tablePosition);
				}
				else {
					setError(i18n("Field not found"), i18n("Table \"%1\" has no \"%2\" field")
						.arg(tableName).arg(fieldName));
					return false;
				}
			}
		}
		else {
			tableNotFoundError(tableName);
			return false;
		}
	}
	return true;
}

	
	extern "C"
	{
		int yywrap()
		{
			return 1;
		}
	}

#if 0
	struct yyval
	{
		QString parserUserName;
		int integerValue;
		KexiDBField::ColumnType coltype;
	}
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#ifndef YYSTYPE
#line 689 "sqlparser.y"
typedef union {
	char stringValue[255];
	int integerValue;
	struct realType realValue;
	KexiDB::Field::Type colType;
	KexiDB::Field *field;
	KexiDB::BaseExpr *expr;
	KexiDB::NArgExpr *exprList;
	KexiDB::ConstExpr *constExpr;
	KexiDB::QuerySchema *querySchema;
} yystype;
/* Line 193 of /usr/share/bison/yacc.c.  */
#line 1044 "sqlparser.tab.c"
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */


/* Line 213 of /usr/share/bison/yacc.c.  */
#line 1065 "sqlparser.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];	\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  10
#define YYLAST   348

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  356
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  23
/* YYNRULES -- Number of rules. */
#define YYNRULES  70
/* YYNRULES -- Number of states. */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   592

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   344,   339,     2,   348,
     345,   346,   338,   337,   342,   336,   343,   349,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   341,
       2,   350,     2,   347,   340,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   354,     2,   355,   353,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   351,   352
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    14,    16,    18,    19,
      27,    31,    33,    36,    40,    43,    45,    48,    51,    53,
      55,    60,    65,    66,    69,    73,    76,    80,    85,    87,
      90,    94,    98,   101,   105,   109,   113,   117,   121,   125,
     129,   133,   137,   141,   145,   149,   154,   156,   160,   162,
     164,   166,   168,   172,   176,   177,   180,   184,   186,   188,
     191,   195,   199,   201,   203,   205,   209,   212,   214,   219,
     221
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     357,     0,    -1,   358,    -1,   359,   341,   358,    -1,   359,
      -1,   359,   341,    -1,   360,    -1,   367,    -1,    -1,    71,
     287,   314,   361,   345,   362,   346,    -1,   362,   342,   363,
      -1,   363,    -1,   314,   366,    -1,   314,   366,   364,    -1,
     364,   365,    -1,   365,    -1,   234,   168,    -1,   205,   208,
      -1,    30,    -1,     3,    -1,     3,   345,   266,   346,    -1,
     321,   345,   266,   346,    -1,    -1,   368,   375,    -1,   368,
     375,   372,    -1,   368,   372,    -1,   368,   375,   369,    -1,
     368,   375,   372,   369,    -1,   260,    -1,   328,   370,    -1,
     370,    19,   370,    -1,   370,   219,   370,    -1,   205,   370,
      -1,   370,   337,   370,    -1,   370,   336,   370,    -1,   370,
     349,   370,    -1,   370,   338,   370,    -1,   370,   339,   370,
      -1,   370,   206,   370,    -1,   370,   142,   370,    -1,   370,
     141,   370,    -1,   370,   175,   370,    -1,   370,   174,   370,
      -1,   370,   177,   370,    -1,   370,   151,   370,    -1,   314,
     345,   371,   346,    -1,   314,    -1,   314,   343,   314,    -1,
     208,    -1,    50,    -1,   266,    -1,   267,    -1,   345,   370,
     346,    -1,   371,   342,   370,    -1,    -1,   134,   373,    -1,
     373,   342,   374,    -1,   374,    -1,   314,    -1,   314,   314,
      -1,   314,    22,   314,    -1,   375,   342,   376,    -1,   376,
      -1,   377,    -1,   378,    -1,   377,    22,   314,    -1,   377,
     314,    -1,   370,    -1,   104,   345,   377,   346,    -1,   338,
      -1,   315,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   748,   748,   758,   763,   764,   773,   778,   786,   784,
     793,   794,   799,   809,   823,   824,   829,   835,   840,   847,
     853,   860,   866,   874,   895,  1006,  1010,  1014,  1020,  1030,
    1041,  1047,  1052,  1057,  1061,  1065,  1069,  1073,  1077,  1081,
    1085,  1089,  1093,  1097,  1101,  1105,  1110,  1124,  1135,  1142,
    1150,  1158,  1163,  1170,  1176,  1182,  1223,  1229,  1236,  1272,
    1281,  1294,  1301,  1309,  1319,  1324,  1336,  1350,  1389,  1397,
    1407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SQL_TYPE", "SQL_ABS", "ACOS", "AMPERSAND", 
  "SQL_ABSOLUTE", "ADA", "ADD", "ADD_DAYS", "ADD_HOURS", "ADD_MINUTES", 
  "ADD_MONTHS", "ADD_SECONDS", "ADD_YEARS", "ALL", "ALLOCATE", "ALTER", 
  "AND", "ANY", "ARE", "AS", "ASIN", "ASC", "ASCII", "ASSERTION", "ATAN", 
  "ATAN2", "AUTHORIZATION", "AUTO_INCREMENT", "AVG", "BEFORE", 
  "SQL_BEGIN", "BETWEEN", "BIGINT", "BINARY", "BIT", "BIT_LENGTH", 
  "BREAK", "BY", "CASCADE", "CASCADED", "CASE", "CAST", "CATALOG", 
  "CEILING", "CENTER", "SQL_CHAR", "CHAR_LENGTH", 
  "CHARACTER_STRING_LITERAL", "CHECK", "CLOSE", "COALESCE", "COBOL", 
  "COLLATE", "COLLATION", "COLUMN", "COMMIT", "COMPUTE", "CONCAT", 
  "CONNECT", "CONNECTION", "CONSTRAINT", "CONSTRAINTS", "CONTINUE", 
  "CONVERT", "CORRESPONDING", "COS", "COT", "COUNT", "CREATE", "CURDATE", 
  "CURRENT", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", 
  "CURTIME", "CURSOR", "DATABASE", "SQL_DATE", "DATE_FORMAT", 
  "DATE_REMAINDER", "DATE_VALUE", "DAY", "DAYOFMONTH", "DAYOFWEEK", 
  "DAYOFYEAR", "DAYS_BETWEEN", "DEALLOCATE", "DEC", "DECLARE", "DEFAULT", 
  "DEFERRABLE", "DEFERRED", "SQL_DELETE", "DESC", "DESCRIBE", 
  "DESCRIPTOR", "DIAGNOSTICS", "DICTIONARY", "DIRECTORY", "DISCONNECT", 
  "DISPLACEMENT", "DISTINCT", "DOMAIN_TOKEN", "SQL_DOUBLE", 
  "DOUBLE_QUOTED_STRING", "DROP", "ELSE", "END", "END_EXEC", "EQUAL", 
  "ESCAPE", "EXCEPT", "SQL_EXCEPTION", "EXEC", "EXECUTE", "EXISTS", "EXP", 
  "EXPONENT", "EXTERNAL", "EXTRACT", "SQL_FALSE", "FETCH", "FIRST", 
  "SQL_FLOAT", "FLOOR", "FN", "FOR", "FOREIGN", "FORTRAN", "FOUND", 
  "FOUR_DIGITS", "FROM", "FULL", "GET", "GLOBAL", "GO", "GOTO", "GRANT", 
  "GREATER_OR_EQUAL", "GREATER_THAN", "GROUP", "HAVING", "HOUR", 
  "HOURS_BETWEEN", "IDENTITY", "IFNULL", "SQL_IGNORE", "IMMEDIATE", 
  "SQL_IN", "INCLUDE", "INDEX", "INDICATOR", "INITIALLY", "INNER", 
  "INPUT", "INSENSITIVE", "INSERT", "INTEGER", "INTERSECT", "INTERVAL", 
  "INTO", "IS", "ISOLATION", "JOIN", "JUSTIFY", "KEY", "LANGUAGE", "LAST", 
  "LCASE", "LEFT", "LENGTH", "LESS_OR_EQUAL", "LESS_THAN", "LEVEL", 
  "LIKE", "LINE_WIDTH", "LOCAL", "LOCATE", "LOG", "SQL_LONG", "LOWER", 
  "LTRIM", "LTRIP", "MATCH", "SQL_MAX", "MICROSOFT", "SQL_MIN", "MINUS", 
  "MINUTE", "MINUTES_BETWEEN", "MOD", "MODIFY", "MODULE", "MONTH", 
  "MONTHS_BETWEEN", "MUMPS", "NAMES", "NATIONAL", "NCHAR", "NEXT", 
  "NODUP", "NONE", "NOT", "NOT_EQUAL", "NOW", "SQL_NULL", "NULLIF", 
  "NUMERIC", "OCTET_LENGTH", "ODBC", "OF", "SQL_OFF", "SQL_ON", "ONLY", 
  "OPEN", "OPTION", "OR", "ORDER", "OUTER", "OUTPUT", "OVERLAPS", "PAGE", 
  "PARTIAL", "SQL_PASCAL", "PERSISTENT", "CQL_PI", "PLI", "POSITION", 
  "PRECISION", "PREPARE", "PRESERVE", "PRIMARY", "PRIOR", "PRIVILEGES", 
  "PROCEDURE", "PRODUCT", "PUBLIC", "QUARTER", "QUIT", "RAND", 
  "READ_ONLY", "REAL", "REFERENCES", "REPEAT", "REPLACE", "RESTRICT", 
  "REVOKE", "RIGHT", "ROLLBACK", "ROWS", "RPAD", "RTRIM", "SCHEMA", 
  "SCREEN_WIDTH", "SCROLL", "SECOND", "SECONDS_BETWEEN", "SELECT", 
  "SEQUENCE", "SETOPT", "SET", "SHOWOPT", "SIGN", "INTEGER_CONST", 
  "REAL_CONST", "SIN", "SQL_SIZE", "SMALLINT", "SOME", "SPACE", "SQL", 
  "SQL_TRUE", "SQLCA", "SQLCODE", "SQLERROR", "SQLSTATE", "SQLWARNING", 
  "SQRT", "STDEV", "SUBSTRING", "SUM", "SYSDATE", "SYSDATE_FORMAT", 
  "SYSTEM", "TABLE", "TAN", "TEMPORARY", "THEN", "THREE_DIGITS", "TIME", 
  "TIMESTAMP", "TIMEZONE_HOUR", "TIMEZONE_MINUTE", "TINYINT", "TO", 
  "TO_CHAR", "TO_DATE", "TRANSACTION", "TRANSLATE", "TRANSLATION", 
  "TRUNCATE", "GENERAL_TITLE", "TWO_DIGITS", "UCASE", "UNION", "UNIQUE", 
  "SQL_UNKNOWN", "UPDATE", "UPPER", "USAGE", "USER", "IDENTIFIER", 
  "IDENTIFIER_DOT_ASTERISK", "ERROR_DIGIT_BEFORE_IDENTIFIER", "USING", 
  "VALUE", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "VENDOR", "VIEW", 
  "WEEK", "WHEN", "WHENEVER", "WHERE", "WHERE_CURRENT_OF", "WITH", 
  "WORD_WRAPPED", "WORK", "WRAPPED", "YEAR", "YEARS_BETWEEN", "'-'", 
  "'+'", "'*'", "'%'", "'@'", "';'", "','", "'.'", "'$'", "'('", "')'", 
  "'?'", "'''", "'/'", "'='", "SIMILAR", "ILIKE", "'^'", "'['", "']'", 
  "$accept", "TopLevelStatement", "StatementList", "Statement", 
  "CreateTableStatement", "@1", "ColDefs", "ColDef", "ColKeys", "ColKey", 
  "ColType", "SelectStatement", "Select", "WhereClause", "aExpr", 
  "aExprList", "Tables", "FlatTableList", "FlatTable", "ColViews", 
  "ColItem", "ColExpression", "ColWildCard", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,    45,    43,    42,    37,
      64,    59,    44,    46,    36,    40,    41,    63,    39,    47,
      61,   591,   592,    94,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   356,   357,   358,   358,   358,   359,   359,   361,   360,
     362,   362,   363,   363,   364,   364,   365,   365,   365,   366,
     366,   366,   366,   367,   367,   367,   367,   367,   368,   369,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   371,   371,   372,   373,   373,   374,   374,
     374,   375,   375,   376,   376,   376,   376,   377,   377,   378,
     378
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     2,     1,     1,     0,     7,
       3,     1,     2,     3,     2,     1,     2,     2,     1,     1,
       4,     4,     0,     2,     3,     2,     3,     4,     1,     2,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     1,     3,     1,     1,
       1,     1,     3,     3,     0,     2,     3,     1,     1,     2,
       3,     3,     1,     1,     1,     3,     2,     1,     4,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,    28,     0,     2,     4,     6,     7,     0,     0,
       1,     5,    49,     0,     0,     0,    48,    50,    51,    46,
      70,    69,     0,    67,    25,    23,    62,    63,    64,     8,
       3,     0,    58,    55,    57,    32,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    24,     0,    66,     0,
       0,     0,    59,     0,    47,     0,    52,    30,    40,    39,
      44,    42,    41,    43,    38,    31,    34,    33,    36,    37,
      35,    29,    61,    27,    65,     0,    68,    60,    56,     0,
      45,    22,     0,    11,    53,    19,     0,    12,     0,     9,
       0,     0,    18,     0,     0,    13,    15,    10,     0,     0,
      17,    16,    14,    20,    21
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     3,     4,     5,     6,    59,    92,    93,   105,   106,
      97,     7,     8,    55,    23,    65,    24,    33,    34,    25,
      26,    27,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -326
static const short yypact[] =
{
     -68,  -276,  -326,    19,  -326,  -319,  -326,  -326,   -44,  -286,
    -326,   -68,  -326,  -316,  -284,   -38,  -326,  -326,  -326,  -318,
    -326,  -326,   -38,   -15,  -326,  -125,  -326,   -21,  -326,  -326,
    -326,   -40,   -17,  -311,  -326,  -128,  -282,  -326,   -19,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -42,  -326,  -295,  -280,  -326,  -308,
    -307,  -274,  -326,  -284,  -326,  -325,  -326,  -128,  -106,  -106,
    -101,  -106,  -106,  -101,  -106,    -1,  -323,  -323,  -326,  -326,
    -326,   -15,  -326,  -326,  -326,  -273,  -326,  -326,  -326,   -38,
    -326,     4,  -322,  -326,   -15,  -303,  -302,   -28,  -273,  -326,
    -228,  -222,  -326,  -160,  -117,   -28,  -326,  -326,  -294,  -293,
    -326,  -326,  -326,  -326,  -326
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -326,  -326,    43,  -326,  -326,  -326,  -326,   -43,  -326,   -49,
    -326,  -326,  -326,     1,    62,  -326,    33,  -326,    -4,  -326,
       7,    32,  -326
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1
static const yysigned_char yytable[] =
{
      39,    57,   102,     1,    39,    61,    12,    95,    12,    14,
      12,     9,    12,    40,    41,    50,    51,    89,    39,    10,
      98,    90,    11,    42,    99,    36,    52,    37,    29,    31,
      32,    63,    64,    53,    84,    -1,    -1,    85,   108,    86,
      87,    91,   100,   101,   109,    42,    43,    44,   110,    45,
      -1,   111,   113,   114,    30,   107,   112,    83,    56,    88,
      13,    82,    13,    60,    13,     0,     0,     0,    -1,    -1,
       0,    45,     0,     0,     0,     0,    -1,    35,    46,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,    40,    41,     0,     0,    40,    41,     0,     0,
       0,     0,    42,     0,     0,     0,    42,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    94,     0,     0,     0,    43,    44,     0,    45,    43,
      44,    15,    45,    15,    16,    15,    16,    15,    16,     0,
      16,     0,     0,    43,    44,     0,    45,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,    46,     2,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,    53,    47,    46,   104,     0,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    54,     0,     0,
       0,    52,    17,    18,    17,    18,    17,    18,    17,    18,
      48,    49,    50,    51,     0,    48,    49,    50,    51,     0,
       0,     0,     0,    52,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    19,    20,    19,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,    21,     0,    21,    62,     0,     0,
       0,    22,     0,    22,     0,    22,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    49,    50,
      51,    48,    49,    50,    51,    96,     0,    66,     0,     0,
      52,     0,     0,     0,    52,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52
};

static const short yycheck[] =
{
      19,    22,    30,    71,    19,    22,    50,     3,    50,   134,
      50,   287,    50,   141,   142,   338,   339,   342,    19,     0,
     342,   346,   341,   151,   346,   343,   349,   345,   314,   345,
     314,   342,   314,   328,   314,   141,   142,   345,   266,   346,
     314,   314,   345,   345,   266,   151,   174,   175,   208,   177,
     151,   168,   346,   346,    11,    98,   105,    56,    25,    63,
     104,    54,   104,    31,   104,    -1,    -1,    -1,   174,   175,
      -1,   177,    -1,    -1,    -1,    -1,   177,    15,   206,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,    -1,    -1,   141,   142,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,   151,    -1,    -1,    -1,
     141,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,    89,    -1,    -1,    -1,   174,   175,    -1,   177,   174,
     175,   205,   177,   205,   208,   205,   208,   205,   208,    -1,
     208,    -1,    -1,   174,   175,    -1,   177,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
      -1,   206,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,   328,   219,   206,   234,    -1,   336,   337,
     338,   339,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,   349,   266,   267,   266,   267,   266,   267,   266,   267,
     336,   337,   338,   339,    -1,   336,   337,   338,   339,    -1,
      -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,   349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,   315,   314,   315,   314,    -1,   314,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   338,    -1,   338,   314,    -1,    -1,
      -1,   345,    -1,   345,    -1,   345,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,   337,   338,
     339,   336,   337,   338,   339,   321,    -1,   346,    -1,    -1,
     349,    -1,    -1,    -1,   349,   336,   337,   338,   339,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,    71,   260,   357,   358,   359,   360,   367,   368,   287,
       0,   341,    50,   104,   134,   205,   208,   266,   267,   314,
     315,   338,   345,   370,   372,   375,   376,   377,   378,   314,
     358,   345,   314,   373,   374,   370,   343,   345,   370,    19,
     141,   142,   151,   174,   175,   177,   206,   219,   336,   337,
     338,   339,   349,   328,   342,   369,   372,    22,   314,   361,
     377,    22,   314,   342,   314,   371,   346,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   376,   369,   314,   345,   346,   314,   374,   342,
     346,   314,   362,   363,   370,     3,   321,   366,   342,   346,
     345,   345,    30,   205,   234,   364,   365,   363,   266,   266,
     208,   168,   365,   346,   346
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#define YYLEX	yylex ()

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;


int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 2:
#line 750 "sqlparser.y"
    {
//todo: multiple statements
//todo: not only "select" statements
	parser->setOperation(KexiDB::Parser::OP_Select);
	parser->setQuerySchema(yyvsp[0].querySchema);
}
    break;

  case 3:
#line 760 "sqlparser.y"
    {
//todo: multiple statements
}
    break;

  case 5:
#line 765 "sqlparser.y"
    {
	yyval.querySchema = yyvsp[-1].querySchema;
}
    break;

  case 6:
#line 775 "sqlparser.y"
    {
YYACCEPT;
}
    break;

  case 7:
#line 779 "sqlparser.y"
    {
	yyval.querySchema = yyvsp[0].querySchema;
}
    break;

  case 8:
#line 786 "sqlparser.y"
    {
	parser->setOperation(KexiDB::Parser::OP_CreateTable);
	parser->createTable(yyvsp[0].stringValue);
}
    break;

  case 11:
#line 795 "sqlparser.y"
    {
}
    break;

  case 12:
#line 801 "sqlparser.y"
    {
	kdDebug() << "adding field " << yyvsp[-1].stringValue << endl;
	field->setName(yyvsp[-1].stringValue);
	parser->table()->addField(field);

//	delete field;
	field = 0;
}
    break;

  case 13:
#line 810 "sqlparser.y"
    {
	kdDebug() << "adding field " << yyvsp[-2].stringValue << endl;
	field->setName(yyvsp[-2].stringValue);
	parser->table()->addField(field);

//	if(field->isPrimaryKey())
//		parser->table()->addPrimaryKey(field->name());

//	delete field;
//	field = 0;
}
    break;

  case 15:
#line 825 "sqlparser.y"
    {
}
    break;

  case 16:
#line 831 "sqlparser.y"
    {
	field->setPrimaryKey(true);
	kdDebug() << "primary" << endl;
}
    break;

  case 17:
#line 836 "sqlparser.y"
    {
	field->setNotNull(true);
	kdDebug() << "not_null" << endl;
}
    break;

  case 18:
#line 841 "sqlparser.y"
    {
	field->setAutoIncrement(true);
	kdDebug() << "ainc" << endl;
}
    break;

  case 19:
#line 849 "sqlparser.y"
    {
	field = new KexiDB::Field();
	field->setType(yyvsp[0].colType);
}
    break;

  case 20:
#line 854 "sqlparser.y"
    {
	kdDebug() << "sql + length" << endl;
	field = new KexiDB::Field();
	field->setPrecision(yyvsp[-1].integerValue);
	field->setType(yyvsp[-3].colType);
}
    break;

  case 21:
#line 861 "sqlparser.y"
    {
	field = new KexiDB::Field();
	field->setPrecision(yyvsp[-1].integerValue);
	field->setType(KexiDB::Field::Text);
}
    break;

  case 22:
#line 867 "sqlparser.y"
    {
	// SQLITE compatibillity
	field = new KexiDB::Field();
	field->setType(KexiDB::Field::InvalidType);
}
    break;

  case 23:
#line 876 "sqlparser.y"
    {
	kdDebug() << "Select ColViews=" << yyvsp[0].exprList->debugString() << endl;
	
/*
	parser->select()->setBaseTable();
	if(parser->select()->unresolvedWildcard() && parser->db())
	{
		//resolve a (pure) wildcard

		TableStruct s = parser->db()->structure();

		for(Field *it = s.first(); it; it = s.next())
		{
			parser->select()->addCol(*it);
		}
		parser->select()->setUnresolvedWildcard(false);
	}
*/
}
    break;

  case 24:
#line 896 "sqlparser.y"
    {
//TODO: move this to all SELECT versions
	
	KexiDB::QuerySchema* querySchema = yyvsp[-2].querySchema;
	yyval.querySchema = querySchema;
	
	//-------tables list
	KexiDB::NArgExpr *tablesList = yyvsp[0].exprList;
	assert( tablesList ); //&& tablesList->exprClass() == KexiDBExpr_TableList );

	uint columnNum = 0;
/*TODO: use this later if there are columns that use database fields, 
        e.g. "SELECT 1 from table1 t, table2 t") is ok however. */
	//used to collect information about first repeated table name or alias:
	QDict<char> tableNamesAndTableAliases(997, false);
	QString repeatedTableNameOrTableAlias;
	
	for (int i=0; i<tablesList->args(); i++, columnNum++) {
		BaseExpr *e = tablesList->arg(i);
		VariableExpr* t_e = 0;
		QCString aliasString;
		if (e->exprClass() == KexiDBExpr_SpecialBinary) {
			BinaryExpr* t_with_alias = dynamic_cast<BinaryExpr*>(e);
			assert(t_with_alias);
			assert(t_with_alias->left()->exprClass() == KexiDBExpr_Variable);
			assert(t_with_alias->right()->exprClass() == KexiDBExpr_Variable
				&& (t_with_alias->type()==AS || t_with_alias->type()==0));
			t_e = dynamic_cast<VariableExpr*>(t_with_alias->left());
			aliasString = dynamic_cast<VariableExpr*>(t_with_alias->right())->name.latin1();
		}
		else {
			t_e = dynamic_cast<VariableExpr*>(e);
		}
		assert(t_e);
		QString tname = t_e->name.latin1();
		KexiDB::TableSchema *s = parser->db()->tableSchema(tname);
		if(!s) {
			setError(i18n("Field List Error"), 
				i18n("Table \"%1\" does not exist").arg(tname));
//			yyerror("fieldlisterror");
			return 0;
		}
		// 1. collect information about first repeated table name or alias
		//    (potential ambiguity)
		if (repeatedTableNameOrTableAlias.isEmpty()) {
			if (tableNamesAndTableAliases[tname])
				repeatedTableNameOrTableAlias=tname;
			else
				tableNamesAndTableAliases.insert(tname, (const char*)1);
		}
		if (!aliasString.isEmpty()) {
			kdDebug() << "- add alias for table: " << aliasString << endl;
//			querySchema->setTableAlias(columnNum, aliasString);
			//2. collect information about first repeated table name or alias
			//   (potential ambiguity)
			if (repeatedTableNameOrTableAlias.isEmpty()) {
				if (tableNamesAndTableAliases[aliasString])
					repeatedTableNameOrTableAlias=aliasString;
				else
					tableNamesAndTableAliases.insert(aliasString, (const char*)1);
			}
		}
		kdDebug() << "addTable: " << tname << endl;
		querySchema->addTable( s, aliasString );
	}

	/* set parent table if there's only one */
//	if (parser->select()->tables()->count()==1)
	if (querySchema->tables()->count()==1)
			querySchema->setParentTable(querySchema->tables()->first());

	//-------add fields
	KexiDB::BaseExpr *e;
	columnNum = 0;
	for (KexiDB::BaseExpr::ListIterator it(yyvsp[-1].exprList->list); (e = it.current()); ++it, columnNum++)
	{
		BaseExpr *columnVariable;
		if (e->exprClass() == KexiDBExpr_SpecialBinary && dynamic_cast<BinaryExpr*>(e)) {
			columnVariable = dynamic_cast<BinaryExpr*>(e)->left();
		}
		else if (e->exprClass() == KexiDBExpr_Variable) {
			columnVariable = e;
		}
		else {
			setError(i18n("Invalid column definition")); //ok?
			return 0;
		}
		if (!addColumn( querySchema, columnVariable ))
			return 0;
		
		if (e->exprClass() == KexiDBExpr_SpecialBinary && dynamic_cast<BinaryExpr*>(e)
			&& (e->type()==AS || e->type()==0))
		{
			//also add alias
			VariableExpr* aliasVariable =
				dynamic_cast<VariableExpr*>(dynamic_cast<BinaryExpr*>(e)->right());
			if (!aliasVariable) {
				setError(i18n("Invalid column alias definition")); //ok?
				return 0;
			}
			kdDebug() << "ALIAS \"" << aliasVariable->name << "\" set for column " 
				<< columnNum << endl;
			querySchema->setColumnAlias(columnNum, aliasVariable->name.latin1());
		}
	}
	kdDebug() << "Select ColViews=" << yyvsp[-1].exprList->debugString() 
		<< " Tables=" << yyvsp[0].exprList->debugString() << endl;
	
	delete yyvsp[-1].exprList; //no longer needed
}
    break;

  case 25:
#line 1007 "sqlparser.y"
    {
	kdDebug() << "Select ColViews Tables" << endl;
}
    break;

  case 26:
#line 1011 "sqlparser.y"
    {
	kdDebug() << "Select ColViews Conditions" << endl;
}
    break;

  case 27:
#line 1015 "sqlparser.y"
    {
	kdDebug() << "Select ColViews Tables Conditions" << endl;
}
    break;

  case 28:
#line 1022 "sqlparser.y"
    {
	kdDebug() << "SELECT" << endl;
//	parser->createSelect();
//	parser->setOperation(KexiDB::Parser::OP_Select);
	yyval.querySchema = new QuerySchema();
}
    break;

  case 29:
#line 1032 "sqlparser.y"
    {
	yyval.expr = yyvsp[0].expr;
}
    break;

  case 30:
#line 1043 "sqlparser.y"
    {
//	kdDebug() << "AND " << .debugString() << endl;
	yyval.expr = new KexiDB::BinaryExpr( KexiDBExpr_Logical, yyvsp[-2].expr, AND, yyvsp[0].expr );
}
    break;

  case 31:
#line 1048 "sqlparser.y"
    {
//	kdDebug() << "OR " <<  << endl;
	yyval.expr = new KexiDB::BinaryExpr( KexiDBExpr_Logical, yyvsp[-2].expr, OR, yyvsp[0].expr );
}
    break;

  case 32:
#line 1053 "sqlparser.y"
    {
	yyval.expr = new KexiDB::UnaryExpr( NOT, yyvsp[0].expr );
//	$$->setName(->name() + " NOT " + ->name());
}
    break;

  case 33:
#line 1058 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Arithm, yyvsp[-2].expr, '+', yyvsp[0].expr);
}
    break;

  case 34:
#line 1062 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Arithm, yyvsp[-2].expr, '-', yyvsp[0].expr);
}
    break;

  case 35:
#line 1066 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Arithm, yyvsp[-2].expr, '/', yyvsp[0].expr);
}
    break;

  case 36:
#line 1070 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Arithm, yyvsp[-2].expr, '*', yyvsp[0].expr);
}
    break;

  case 37:
#line 1074 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Arithm, yyvsp[-2].expr, '%', yyvsp[0].expr);
}
    break;

  case 38:
#line 1078 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, NOT_EQUAL, yyvsp[0].expr);
}
    break;

  case 39:
#line 1082 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, GREATER_THAN, yyvsp[0].expr);
}
    break;

  case 40:
#line 1086 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, GREATER_OR_EQUAL, yyvsp[0].expr);
}
    break;

  case 41:
#line 1090 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, LESS_THAN, yyvsp[0].expr);
}
    break;

  case 42:
#line 1094 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, LESS_OR_EQUAL, yyvsp[0].expr);
}
    break;

  case 43:
#line 1098 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, LIKE, yyvsp[0].expr);
}
    break;

  case 44:
#line 1102 "sqlparser.y"
    {
	yyval.expr = new KexiDB::BinaryExpr(KexiDBExpr_Relational, yyvsp[-2].expr, SQL_IN, yyvsp[0].expr);
}
    break;

  case 45:
#line 1106 "sqlparser.y"
    {
	kdDebug() << "  + function: " << yyvsp[-3].stringValue << "(" << yyvsp[-1].exprList->debugString() << ")" << endl;
	yyval.expr = new KexiDB::FunctionExpr(yyvsp[-3].stringValue, yyvsp[-1].exprList);
}
    break;

  case 46:
#line 1111 "sqlparser.y"
    {
	yyval.expr = new KexiDB::VariableExpr( QString::fromLatin1(yyvsp[0].stringValue) );
	
//TODO: simplify this later if that's 'only one field name' expression
	kdDebug() << "  + identifier: " << yyvsp[0].stringValue << endl;
//	$$ = new KexiDB::Field();
//	$$->setName();
//	$$->setTable(dummy);

//	parser->select()->addField(field);
	requiresTable = true;
}
    break;

  case 47:
#line 1125 "sqlparser.y"
    {
	yyval.expr = new KexiDB::VariableExpr( QString::fromLatin1(yyvsp[-2].stringValue) + "." + QString::fromLatin1(yyvsp[0].stringValue) );
	kdDebug() << "  + identifier.identifier: " << yyvsp[0].stringValue << "." << yyvsp[-2].stringValue << endl;
//	$$ = new KexiDB::Field();
//	s->setTable();
//	$$->setName();
	//$$->setTable(parser->db()->tableSchema());
//	parser->select()->addField(field);
//??	requiresTable = true;
}
    break;

  case 48:
#line 1136 "sqlparser.y"
    {
	yyval.expr = new KexiDB::ConstExpr( SQL_NULL, QVariant() );
	kdDebug() << "  + NULL" << endl;
//	$$ = new KexiDB::Field();
	//$$->setName(QString::null);
}
    break;

  case 49:
#line 1143 "sqlparser.y"
    {
	yyval.expr = new KexiDB::ConstExpr( CHARACTER_STRING_LITERAL, yyvsp[0].stringValue );
//	$$ = new KexiDB::Field();
//	$$->setName();
//	parser->select()->addField(field);
	kdDebug() << "  + constant \"" << yyvsp[0].stringValue << "\"" << endl;
}
    break;

  case 50:
#line 1151 "sqlparser.y"
    {
	yyval.expr = new KexiDB::ConstExpr( INTEGER_CONST, yyvsp[0].integerValue );
//	$$ = new KexiDB::Field();
//	$$->setName(QString::number());
//	parser->select()->addField(field);
	kdDebug() << "  + int constant: " << yyvsp[0].integerValue << endl;
}
    break;

  case 51:
#line 1159 "sqlparser.y"
    {
	yyval.expr = new KexiDB::ConstExpr( REAL_CONST, QPoint( yyvsp[0].realValue.integer, yyvsp[0].realValue.fractional ) );
	kdDebug() << "  + real constant: " << yyvsp[0].realValue.integer << "." << yyvsp[0].realValue.fractional << endl;
}
    break;

  case 52:
#line 1164 "sqlparser.y"
    {
	kdDebug() << "(expr)" << endl;
	yyval.expr = yyvsp[-1].expr;
}
    break;

  case 53:
#line 1172 "sqlparser.y"
    {
	yyvsp[-2].exprList->add( yyvsp[0].expr );
	yyval.exprList = yyvsp[-2].exprList;
}
    break;

  case 54:
#line 1177 "sqlparser.y"
    {
	yyval.exprList = new KexiDB::NArgExpr(0, 0/*unknown*/);
}
    break;

  case 55:
#line 1184 "sqlparser.y"
    {
	yyval.exprList = yyvsp[0].exprList;
}
    break;

  case 56:
#line 1225 "sqlparser.y"
    {
	yyval.exprList = yyvsp[-2].exprList;
	yyval.exprList->add(yyvsp[0].expr);
}
    break;

  case 57:
#line 1230 "sqlparser.y"
    {
	yyval.exprList = new KexiDB::NArgExpr(KexiDBExpr_TableList, IDENTIFIER); //ok?
	yyval.exprList->add(yyvsp[0].expr);
}
    break;

  case 58:
#line 1238 "sqlparser.y"
    {
	kdDebug() << "FROM: '" << yyvsp[0].stringValue << "'" << endl;

//	KexiDB::TableSchema *schema = parser->db()->tableSchema();
//	parser->select()->setParentTable(schema);
//	parser->select()->addTable(schema);
//	requiresTable = false;
	
//addTable();

	yyval.expr = new VariableExpr(QString::fromLatin1(yyvsp[0].stringValue));

	/*
//TODO: this isn't ok for more tables:
	KexiDB::Field::ListIterator it = parser->select()->fieldsIterator();
	for(KexiDB::Field *item; (item = it.current()); ++it)
	{
		if(item->table() == dummy)
		{
			item->setTable(schema);
		}

		if(item->table() && !item->isQueryAsterisk())
		{
			KexiDB::Field *f = item->table()->field(item->name());
			if(!f)
			{
				KexiDB::ParserError err(i18n("Field List Error"), i18n("Unknown column '%1' in table '%2'").arg(item->name()).arg(schema->name()), ctoken, current);
				parser->setError(err);
				yyerror("fieldlisterror");
			}	
		}
	}*/
}
    break;

  case 59:
#line 1273 "sqlparser.y"
    {
	//table + alias
	yyval.expr = new KexiDB::BinaryExpr(
		KexiDBExpr_SpecialBinary, 
		new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[-1].stringValue)), 0,
		new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[0].stringValue))
	);
}
    break;

  case 60:
#line 1282 "sqlparser.y"
    {
	//table + alias
	yyval.expr = new KexiDB::BinaryExpr(
		KexiDBExpr_SpecialBinary,
		new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[-2].stringValue)), AS,
		new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[0].stringValue))
	);
}
    break;

  case 61:
#line 1296 "sqlparser.y"
    {
	yyval.exprList = yyvsp[-2].exprList;
	yyval.exprList->add( yyvsp[0].expr );
	kdDebug() << "ColViews: ColViews , ColItem" << endl;
}
    break;

  case 62:
#line 1302 "sqlparser.y"
    {
	yyval.exprList = new KexiDB::NArgExpr(0,0);
	yyval.exprList->add( yyvsp[0].expr );
	kdDebug() << "ColViews: ColItem" << endl;
}
    break;

  case 63:
#line 1311 "sqlparser.y"
    {
//	$$ = new KexiDB::Field();
//	dummy->addField($$);
//	$$->setExpression(  );
//	parser->select()->addField($$);
	yyval.expr = yyvsp[0].expr;
	kdDebug() << " added column expr: '" << yyvsp[0].expr->debugString() << "'" << endl;
}
    break;

  case 64:
#line 1320 "sqlparser.y"
    {
	yyval.expr = yyvsp[0].expr;
	kdDebug() << " added column wildcard: '" << yyvsp[0].expr->debugString() << "'" << endl;
}
    break;

  case 65:
#line 1325 "sqlparser.y"
    {
//	$$ = new KexiDB::Field();
//	$$->setExpression(  );
//	parser->select()->addField($$);
	yyval.expr = new KexiDB::BinaryExpr(
		KexiDBExpr_SpecialBinary, yyvsp[-2].expr, AS,
		new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[0].stringValue))
//		new KexiDB::ConstExpr(IDENTIFIER, QString::fromLocal8Bit())
	);
	kdDebug() << " added column expr: " << yyval.expr->debugString() << endl;
}
    break;

  case 66:
#line 1337 "sqlparser.y"
    {
//	$$ = new KexiDB::Field();
//	$$->setExpression(  );
//	parser->select()->addField($$);
	yyval.expr = new KexiDB::BinaryExpr(
		KexiDBExpr_SpecialBinary, yyvsp[-1].expr, 0, 
		new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[0].stringValue))
//		new KexiDB::ConstExpr(IDENTIFIER, QString::fromLocal8Bit())
	);
	kdDebug() << " added column expr: " << yyval.expr->debugString() << endl;
}
    break;

  case 67:
#line 1352 "sqlparser.y"
    {
	yyval.expr = yyvsp[0].expr;
}
    break;

  case 68:
#line 1390 "sqlparser.y"
    {
	yyval.expr = yyvsp[-1].expr;
//TODO
//	$$->setName("DISTINCT(" + ->name() + ")");
}
    break;

  case 69:
#line 1399 "sqlparser.y"
    {
	yyval.expr = new KexiDB::VariableExpr("*");
	kdDebug() << "all columns" << endl;

//	KexiDB::QueryAsterisk *ast = new KexiDB::QueryAsterisk(parser->select(), dummy);
//	parser->select()->addAsterisk(ast);
//	requiresTable = true;
}
    break;

  case 70:
#line 1408 "sqlparser.y"
    {
	yyval.expr = new KexiDB::VariableExpr(QString::fromLatin1(yyvsp[0].stringValue));
	kdDebug() << "  + all columns from " << yyvsp[0].stringValue << endl;
//	KexiDB::QueryAsterisk *ast = new KexiDB::QueryAsterisk(parser->select(), parser->db()->tableSchema());
//	parser->select()->addAsterisk(ast);
//	requiresTable = true;
}
    break;


    }

/* Line 1016 of /usr/share/bison/yacc.c.  */
#line 2871 "sqlparser.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1423 "sqlparser.y"



