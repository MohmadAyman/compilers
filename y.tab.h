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
    WHITESPACE = 279,
    MOD = 280,
    GREATER = 281,
    LESS = 282,
    EQUALEQUAL = 283,
    GREATEREQUAL = 284,
    LESSEQUAL = 285,
    NOTEQUAL = 286,
    NOT = 287,
    AND = 288,
    XOR = 289,
    OR = 290,
    XNOR = 291,
    SHIFTL = 292,
    SHIFTR = 293,
    PRINT = 294,
    BREAK = 295,
    CONTINUE = 296,
    LABEL = 297,
    GOTO = 298,
    STRINGVAL = 299,
    LSQUAREPR = 300,
    RSQUAREPR = 301,
    DO = 302,
    DEFAULT = 303,
    INTEGER = 304,
    INT = 305,
    FLOAT = 306,
    CHAR = 307,
    VOID = 308,
    STRING = 309,
    INCREMENT = 310,
    DECREMENT = 311,
    BITOR = 312,
    BITXOR = 313,
    BITXNOR = 314,
    BITAND = 315,
    BITNOT = 316,
    LINECOMMENT = 317,
    PRACOMMENT = 318,
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
#define WHITESPACE 279
#define MOD 280
#define GREATER 281
#define LESS 282
#define EQUALEQUAL 283
#define GREATEREQUAL 284
#define LESSEQUAL 285
#define NOTEQUAL 286
#define NOT 287
#define AND 288
#define XOR 289
#define OR 290
#define XNOR 291
#define SHIFTL 292
#define SHIFTR 293
#define PRINT 294
#define BREAK 295
#define CONTINUE 296
#define LABEL 297
#define GOTO 298
#define STRINGVAL 299
#define LSQUAREPR 300
#define RSQUAREPR 301
#define DO 302
#define DEFAULT 303
#define INTEGER 304
#define INT 305
#define FLOAT 306
#define CHAR 307
#define VOID 308
#define STRING 309
#define INCREMENT 310
#define DECREMENT 311
#define BITOR 312
#define BITXOR 313
#define BITXNOR 314
#define BITAND 315
#define BITNOT 316
#define LINECOMMENT 317
#define PRACOMMENT 318
#define PLUS 319
#define MINUS 320
#define MULT 321
#define DIV 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 13 "comp.y" /* yacc.c:1909  */
int num; char *id;

#line 191 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
