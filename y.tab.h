/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ERROR = 258,
    IF = 259,
    ELSE = 260,
    FOR = 261,
    SWITCH = 262,
    CASE = 263,
    WHILE = 264,
    RETURN = 265,
    UNTIL = 266,
    CONST = 267,
    ID = 268,
    COLN = 269,
    SEMCOLN = 270,
    FLOATING = 271,
    CHARACTER = 272,
    LPR = 273,
    RPR = 274,
    LBRA = 275,
    RBRA = 276,
    ASSGN = 277,
    COMA = 278,
    MOD = 279,
    GREATER = 280,
    LESS = 281,
    EQUALEQUAL = 282,
    GREATEREQUAL = 283,
    LESSEQUAL = 284,
    NOTEQUAL = 285,
    NOT = 286,
    AND = 287,
    XOR = 288,
    OR = 289,
    XNOR = 290,
    SHIFTL = 291,
    SHIFTR = 292,
    PRINT = 293,
    BREAK = 294,
    CONTINUE = 295,
    LABEL = 296,
    GOTO = 297,
    STRINGVAL = 298,
    LSQUAREPR = 299,
    RSQUAREPR = 300,
    DO = 301,
    DEFAULT = 302,
    INTEGER = 303,
    INT = 304,
    FLOAT = 305,
    CHAR = 306,
    VOID = 307,
    STRING = 308,
    INCREMENT = 309,
    DECREMENT = 310,
    BITOR = 311,
    BITXOR = 312,
    BITXNOR = 313,
    BITAND = 314,
    BITNOT = 315,
    LINECOMMENT = 316,
    PRACOMMENT = 317,
    exit_command = 318,
    PLUS = 319,
    MINUS = 320,
    MULT = 321,
    DIV = 322
  };
#endif
/* Tokens.  */
#define ERROR 258
#define IF 259
#define ELSE 260
#define FOR 261
#define SWITCH 262
#define CASE 263
#define WHILE 264
#define RETURN 265
#define UNTIL 266
#define CONST 267
#define ID 268
#define COLN 269
#define SEMCOLN 270
#define FLOATING 271
#define CHARACTER 272
#define LPR 273
#define RPR 274
#define LBRA 275
#define RBRA 276
#define ASSGN 277
#define COMA 278
#define MOD 279
#define GREATER 280
#define LESS 281
#define EQUALEQUAL 282
#define GREATEREQUAL 283
#define LESSEQUAL 284
#define NOTEQUAL 285
#define NOT 286
#define AND 287
#define XOR 288
#define OR 289
#define XNOR 290
#define SHIFTL 291
#define SHIFTR 292
#define PRINT 293
#define BREAK 294
#define CONTINUE 295
#define LABEL 296
#define GOTO 297
#define STRINGVAL 298
#define LSQUAREPR 299
#define RSQUAREPR 300
#define DO 301
#define DEFAULT 302
#define INTEGER 303
#define INT 304
#define FLOAT 305
#define CHAR 306
#define VOID 307
#define STRING 308
#define INCREMENT 309
#define DECREMENT 310
#define BITOR 311
#define BITXOR 312
#define BITXNOR 313
#define BITAND 314
#define BITNOT 315
#define LINECOMMENT 316
#define PRACOMMENT 317
#define exit_command 318
#define PLUS 319
#define MINUS 320
#define MULT 321
#define DIV 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 15 "comp.y" /* yacc.c:1909  */
int num; char id; float fnum;

#line 191 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
