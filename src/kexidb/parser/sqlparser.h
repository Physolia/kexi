#include <field.h>
#include "parser.h"

void parseData(KexiDB::Parser *p, const char *data);
/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
     ARITHMETIC_MINUS = 277,
     ARITHMETIC_PLUS = 278,
     AS = 279,
     ASIN = 280,
     ASC = 281,
     ASCII = 282,
     ASSERTION = 283,
     ASTERISK = 284,
     AT = 285,
     ATAN = 286,
     ATAN2 = 287,
     AUTHORIZATION = 288,
     AUTO_INCREMENT = 289,
     AVG = 290,
     BEFORE = 291,
     SQL_BEGIN = 292,
     BETWEEN = 293,
     BIGINT = 294,
     BINARY = 295,
     BIT = 296,
     BIT_LENGTH = 297,
     BREAK = 298,
     BY = 299,
     CASCADE = 300,
     CASCADED = 301,
     CASE = 302,
     CAST = 303,
     CATALOG = 304,
     CEILING = 305,
     CENTER = 306,
     SQL_CHAR = 307,
     CHAR_LENGTH = 308,
     CHARACTER_STRING_LITERAL = 309,
     CHECK = 310,
     CLOSE = 311,
     COALESCE = 312,
     COBOL = 313,
     COLLATE = 314,
     COLLATION = 315,
     COLON = 316,
     COLUMN = 317,
     COMMA = 318,
     COMMIT = 319,
     COMPUTE = 320,
     CONCAT = 321,
     CONNECT = 322,
     CONNECTION = 323,
     CONSTRAINT = 324,
     CONSTRAINTS = 325,
     CONTINUE = 326,
     CONVERT = 327,
     CORRESPONDING = 328,
     COS = 329,
     COT = 330,
     COUNT = 331,
     CREATE = 332,
     CURDATE = 333,
     CURRENT = 334,
     CURRENT_DATE = 335,
     CURRENT_TIME = 336,
     CURRENT_TIMESTAMP = 337,
     CURTIME = 338,
     CURSOR = 339,
     DATABASE = 340,
     SQL_DATE = 341,
     DATE_FORMAT = 342,
     DATE_REMAINDER = 343,
     DATE_VALUE = 344,
     DAY = 345,
     DAYOFMONTH = 346,
     DAYOFWEEK = 347,
     DAYOFYEAR = 348,
     DAYS_BETWEEN = 349,
     DEALLOCATE = 350,
     DEC = 351,
     DECLARE = 352,
     DEFAULT = 353,
     DEFERRABLE = 354,
     DEFERRED = 355,
     SQL_DELETE = 356,
     DESC = 357,
     DESCRIBE = 358,
     DESCRIPTOR = 359,
     DIAGNOSTICS = 360,
     DICTIONARY = 361,
     DIRECTORY = 362,
     DISCONNECT = 363,
     DISPLACEMENT = 364,
     DISTINCT = 365,
     DOLLAR_SIGN = 366,
     DOMAIN_TOKEN = 367,
     DOT = 368,
     SQL_DOUBLE = 369,
     DOUBLE_QUOTED_STRING = 370,
     DROP = 371,
     ELSE = 372,
     END = 373,
     END_EXEC = 374,
     EQUAL = 375,
     ESCAPE = 376,
     EXCEPT = 377,
     SQL_EXCEPTION = 378,
     EXEC = 379,
     EXECUTE = 380,
     EXISTS = 381,
     EXP = 382,
     EXPONENT = 383,
     EXTERNAL = 384,
     EXTRACT = 385,
     SQL_FALSE = 386,
     FETCH = 387,
     FIRST = 388,
     SQL_FLOAT = 389,
     FLOOR = 390,
     FN = 391,
     FOR = 392,
     FOREIGN = 393,
     FORTRAN = 394,
     FOUND = 395,
     FOUR_DIGITS = 396,
     FROM = 397,
     FULL = 398,
     GET = 399,
     GLOBAL = 400,
     GO = 401,
     GOTO = 402,
     GRANT = 403,
     GREATER_THAN = 404,
     GREATER_OR_EQUAL = 405,
     GROUP = 406,
     HAVING = 407,
     HOUR = 408,
     HOURS_BETWEEN = 409,
     IDENTITY = 410,
     IFNULL = 411,
     SQL_IGNORE = 412,
     IMMEDIATE = 413,
     SQL_IN = 414,
     INCLUDE = 415,
     INDEX = 416,
     INDICATOR = 417,
     INITIALLY = 418,
     INNER = 419,
     INPUT = 420,
     INSENSITIVE = 421,
     INSERT = 422,
     INTEGER = 423,
     INTERSECT = 424,
     INTERVAL = 425,
     INTO = 426,
     IS = 427,
     ISOLATION = 428,
     JOIN = 429,
     JUSTIFY = 430,
     KEY = 431,
     LANGUAGE = 432,
     LAST = 433,
     LCASE = 434,
     LEFT = 435,
     LEFTPAREN = 436,
     LENGTH = 437,
     LESS_OR_EQUAL = 438,
     LESS_THAN = 439,
     LEVEL = 440,
     LIKE = 441,
     LINE_WIDTH = 442,
     LOCAL = 443,
     LOCATE = 444,
     LOG = 445,
     SQL_LONG = 446,
     LOWER = 447,
     LTRIM = 448,
     LTRIP = 449,
     MATCH = 450,
     SQL_MAX = 451,
     MICROSOFT = 452,
     SQL_MIN = 453,
     MINUS = 454,
     MINUTE = 455,
     MINUTES_BETWEEN = 456,
     MOD = 457,
     MODIFY = 458,
     MODULE = 459,
     MONTH = 460,
     MONTHS_BETWEEN = 461,
     MUMPS = 462,
     NAMES = 463,
     NATIONAL = 464,
     NCHAR = 465,
     NEXT = 466,
     NODUP = 467,
     NONE = 468,
     NOT = 469,
     NOT_EQUAL = 470,
     NOW = 471,
     SQL_NULL = 472,
     NULLIF = 473,
     NUMERIC = 474,
     OCTET_LENGTH = 475,
     ODBC = 476,
     OF = 477,
     SQL_OFF = 478,
     SQL_ON = 479,
     ONLY = 480,
     OPEN = 481,
     OPTION = 482,
     OR = 483,
     ORDER = 484,
     OUTER = 485,
     OUTPUT = 486,
     OVERLAPS = 487,
     PAGE = 488,
     PARTIAL = 489,
     SQL_PASCAL = 490,
     PERSISTENT = 491,
     CQL_PI = 492,
     PLI = 493,
     POSITION = 494,
     PRECISION = 495,
     PREPARE = 496,
     PRESERVE = 497,
     PRIMARY = 498,
     PRIOR = 499,
     PRIVILEGES = 500,
     PROCEDURE = 501,
     PRODUCT = 502,
     PUBLIC = 503,
     QUARTER = 504,
     QUESTION_MARK = 505,
     QUIT = 506,
     RAND = 507,
     READ_ONLY = 508,
     REAL = 509,
     REFERENCES = 510,
     REPEAT = 511,
     REPLACE = 512,
     RESTRICT = 513,
     REVOKE = 514,
     RIGHT = 515,
     RIGHTPAREN = 516,
     ROLLBACK = 517,
     ROWS = 518,
     RPAD = 519,
     RTRIM = 520,
     SCHEMA = 521,
     SCREEN_WIDTH = 522,
     SCROLL = 523,
     SECOND = 524,
     SECONDS_BETWEEN = 525,
     SELECT = 526,
     SEMICOLON = 527,
     SEQUENCE = 528,
     SETOPT = 529,
     SET = 530,
     SHOWOPT = 531,
     SIGN = 532,
     SIGNED_INTEGER = 533,
     SIN = 534,
     SINGLE_QUOTE = 535,
     SQL_SIZE = 536,
     SLASH = 537,
     SMALLINT = 538,
     SOME = 539,
     SPACE = 540,
     SQL = 541,
     SQL_TRUE = 542,
     SQLCA = 543,
     SQLCODE = 544,
     SQLERROR = 545,
     SQLSTATE = 546,
     SQLWARNING = 547,
     SQRT = 548,
     STDEV = 549,
     SUBSTRING = 550,
     SUM = 551,
     SYSDATE = 552,
     SYSDATE_FORMAT = 553,
     SYSTEM = 554,
     TABLE = 555,
     TAN = 556,
     TEMPORARY = 557,
     THEN = 558,
     THREE_DIGITS = 559,
     TIME = 560,
     TIMESTAMP = 561,
     TIMEZONE_HOUR = 562,
     TIMEZONE_MINUTE = 563,
     TINYINT = 564,
     TITLE = 565,
     TO = 566,
     TO_CHAR = 567,
     TO_DATE = 568,
     TRANSACTION = 569,
     TRANSLATE = 570,
     TRANSLATION = 571,
     TRUNCATE = 572,
     GENERAL_TITLE = 573,
     TWO_DIGITS = 574,
     UCASE = 575,
     UNION = 576,
     UNIQUE = 577,
     SQL_UNKNOWN = 578,
     UNSIGNED_INTEGER = 579,
     UPDATE = 580,
     UPPER = 581,
     USAGE = 582,
     USER = 583,
     USER_DEFINED_NAME = 584,
     USING = 585,
     VALUE = 586,
     VALUES = 587,
     VARBINARY = 588,
     VARCHAR = 589,
     VARYING = 590,
     VENDOR = 591,
     VIEW = 592,
     WEEK = 593,
     WHEN = 594,
     WHENEVER = 595,
     WHERE = 596,
     WHERE_CURRENT_OF = 597,
     WITH = 598,
     WORD_WRAPPED = 599,
     WORK = 600,
     WRAPPED = 601,
     YEAR = 602,
     YEARS_BETWEEN = 603
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
#define ARITHMETIC_MINUS 277
#define ARITHMETIC_PLUS 278
#define AS 279
#define ASIN 280
#define ASC 281
#define ASCII 282
#define ASSERTION 283
#define ASTERISK 284
#define AT 285
#define ATAN 286
#define ATAN2 287
#define AUTHORIZATION 288
#define AUTO_INCREMENT 289
#define AVG 290
#define BEFORE 291
#define SQL_BEGIN 292
#define BETWEEN 293
#define BIGINT 294
#define BINARY 295
#define BIT 296
#define BIT_LENGTH 297
#define BREAK 298
#define BY 299
#define CASCADE 300
#define CASCADED 301
#define CASE 302
#define CAST 303
#define CATALOG 304
#define CEILING 305
#define CENTER 306
#define SQL_CHAR 307
#define CHAR_LENGTH 308
#define CHARACTER_STRING_LITERAL 309
#define CHECK 310
#define CLOSE 311
#define COALESCE 312
#define COBOL 313
#define COLLATE 314
#define COLLATION 315
#define COLON 316
#define COLUMN 317
#define COMMA 318
#define COMMIT 319
#define COMPUTE 320
#define CONCAT 321
#define CONNECT 322
#define CONNECTION 323
#define CONSTRAINT 324
#define CONSTRAINTS 325
#define CONTINUE 326
#define CONVERT 327
#define CORRESPONDING 328
#define COS 329
#define COT 330
#define COUNT 331
#define CREATE 332
#define CURDATE 333
#define CURRENT 334
#define CURRENT_DATE 335
#define CURRENT_TIME 336
#define CURRENT_TIMESTAMP 337
#define CURTIME 338
#define CURSOR 339
#define DATABASE 340
#define SQL_DATE 341
#define DATE_FORMAT 342
#define DATE_REMAINDER 343
#define DATE_VALUE 344
#define DAY 345
#define DAYOFMONTH 346
#define DAYOFWEEK 347
#define DAYOFYEAR 348
#define DAYS_BETWEEN 349
#define DEALLOCATE 350
#define DEC 351
#define DECLARE 352
#define DEFAULT 353
#define DEFERRABLE 354
#define DEFERRED 355
#define SQL_DELETE 356
#define DESC 357
#define DESCRIBE 358
#define DESCRIPTOR 359
#define DIAGNOSTICS 360
#define DICTIONARY 361
#define DIRECTORY 362
#define DISCONNECT 363
#define DISPLACEMENT 364
#define DISTINCT 365
#define DOLLAR_SIGN 366
#define DOMAIN_TOKEN 367
#define DOT 368
#define SQL_DOUBLE 369
#define DOUBLE_QUOTED_STRING 370
#define DROP 371
#define ELSE 372
#define END 373
#define END_EXEC 374
#define EQUAL 375
#define ESCAPE 376
#define EXCEPT 377
#define SQL_EXCEPTION 378
#define EXEC 379
#define EXECUTE 380
#define EXISTS 381
#define EXP 382
#define EXPONENT 383
#define EXTERNAL 384
#define EXTRACT 385
#define SQL_FALSE 386
#define FETCH 387
#define FIRST 388
#define SQL_FLOAT 389
#define FLOOR 390
#define FN 391
#define FOR 392
#define FOREIGN 393
#define FORTRAN 394
#define FOUND 395
#define FOUR_DIGITS 396
#define FROM 397
#define FULL 398
#define GET 399
#define GLOBAL 400
#define GO 401
#define GOTO 402
#define GRANT 403
#define GREATER_THAN 404
#define GREATER_OR_EQUAL 405
#define GROUP 406
#define HAVING 407
#define HOUR 408
#define HOURS_BETWEEN 409
#define IDENTITY 410
#define IFNULL 411
#define SQL_IGNORE 412
#define IMMEDIATE 413
#define SQL_IN 414
#define INCLUDE 415
#define INDEX 416
#define INDICATOR 417
#define INITIALLY 418
#define INNER 419
#define INPUT 420
#define INSENSITIVE 421
#define INSERT 422
#define INTEGER 423
#define INTERSECT 424
#define INTERVAL 425
#define INTO 426
#define IS 427
#define ISOLATION 428
#define JOIN 429
#define JUSTIFY 430
#define KEY 431
#define LANGUAGE 432
#define LAST 433
#define LCASE 434
#define LEFT 435
#define LEFTPAREN 436
#define LENGTH 437
#define LESS_OR_EQUAL 438
#define LESS_THAN 439
#define LEVEL 440
#define LIKE 441
#define LINE_WIDTH 442
#define LOCAL 443
#define LOCATE 444
#define LOG 445
#define SQL_LONG 446
#define LOWER 447
#define LTRIM 448
#define LTRIP 449
#define MATCH 450
#define SQL_MAX 451
#define MICROSOFT 452
#define SQL_MIN 453
#define MINUS 454
#define MINUTE 455
#define MINUTES_BETWEEN 456
#define MOD 457
#define MODIFY 458
#define MODULE 459
#define MONTH 460
#define MONTHS_BETWEEN 461
#define MUMPS 462
#define NAMES 463
#define NATIONAL 464
#define NCHAR 465
#define NEXT 466
#define NODUP 467
#define NONE 468
#define NOT 469
#define NOT_EQUAL 470
#define NOW 471
#define SQL_NULL 472
#define NULLIF 473
#define NUMERIC 474
#define OCTET_LENGTH 475
#define ODBC 476
#define OF 477
#define SQL_OFF 478
#define SQL_ON 479
#define ONLY 480
#define OPEN 481
#define OPTION 482
#define OR 483
#define ORDER 484
#define OUTER 485
#define OUTPUT 486
#define OVERLAPS 487
#define PAGE 488
#define PARTIAL 489
#define SQL_PASCAL 490
#define PERSISTENT 491
#define CQL_PI 492
#define PLI 493
#define POSITION 494
#define PRECISION 495
#define PREPARE 496
#define PRESERVE 497
#define PRIMARY 498
#define PRIOR 499
#define PRIVILEGES 500
#define PROCEDURE 501
#define PRODUCT 502
#define PUBLIC 503
#define QUARTER 504
#define QUESTION_MARK 505
#define QUIT 506
#define RAND 507
#define READ_ONLY 508
#define REAL 509
#define REFERENCES 510
#define REPEAT 511
#define REPLACE 512
#define RESTRICT 513
#define REVOKE 514
#define RIGHT 515
#define RIGHTPAREN 516
#define ROLLBACK 517
#define ROWS 518
#define RPAD 519
#define RTRIM 520
#define SCHEMA 521
#define SCREEN_WIDTH 522
#define SCROLL 523
#define SECOND 524
#define SECONDS_BETWEEN 525
#define SELECT 526
#define SEMICOLON 527
#define SEQUENCE 528
#define SETOPT 529
#define SET 530
#define SHOWOPT 531
#define SIGN 532
#define SIGNED_INTEGER 533
#define SIN 534
#define SINGLE_QUOTE 535
#define SQL_SIZE 536
#define SLASH 537
#define SMALLINT 538
#define SOME 539
#define SPACE 540
#define SQL 541
#define SQL_TRUE 542
#define SQLCA 543
#define SQLCODE 544
#define SQLERROR 545
#define SQLSTATE 546
#define SQLWARNING 547
#define SQRT 548
#define STDEV 549
#define SUBSTRING 550
#define SUM 551
#define SYSDATE 552
#define SYSDATE_FORMAT 553
#define SYSTEM 554
#define TABLE 555
#define TAN 556
#define TEMPORARY 557
#define THEN 558
#define THREE_DIGITS 559
#define TIME 560
#define TIMESTAMP 561
#define TIMEZONE_HOUR 562
#define TIMEZONE_MINUTE 563
#define TINYINT 564
#define TITLE 565
#define TO 566
#define TO_CHAR 567
#define TO_DATE 568
#define TRANSACTION 569
#define TRANSLATE 570
#define TRANSLATION 571
#define TRUNCATE 572
#define GENERAL_TITLE 573
#define TWO_DIGITS 574
#define UCASE 575
#define UNION 576
#define UNIQUE 577
#define SQL_UNKNOWN 578
#define UNSIGNED_INTEGER 579
#define UPDATE 580
#define UPPER 581
#define USAGE 582
#define USER 583
#define USER_DEFINED_NAME 584
#define USING 585
#define VALUE 586
#define VALUES 587
#define VARBINARY 588
#define VARCHAR 589
#define VARYING 590
#define VENDOR 591
#define VIEW 592
#define WEEK 593
#define WHEN 594
#define WHENEVER 595
#define WHERE 596
#define WHERE_CURRENT_OF 597
#define WITH 598
#define WORD_WRAPPED 599
#define WORK 600
#define WRAPPED 601
#define YEAR 602
#define YEARS_BETWEEN 603




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 425 "sqlparser.y"
typedef union YYSTYPE {
	char stringValue[255];
	int integerValue;
	KexiDB::Field::Type coltype;
} YYSTYPE;
/* Line 1240 of yacc.c.  */
#line 739 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



