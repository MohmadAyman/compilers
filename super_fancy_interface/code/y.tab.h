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
    FOR = 260,
    SWITCH = 261,
    CASE = 262,
    WHILE = 263,
    RETURN = 264,
    UNTIL = 265,
    CONST = 266,
    ID = 267,
    COLN = 268,
    SEMCOLN = 269,
    FLOATING = 270,
    CHARACTER = 271,
    LPR = 272,
    RPR = 273,
    LBRA = 274,
    RBRA = 275,
    ASSGN = 276,
    COMA = 277,
    MOD = 278,
    GREATER = 279,
    LESS = 280,
    EQUALEQUAL = 281,
    GREATEREQUAL = 282,
    LESSEQUAL = 283,
    NOTEQUAL = 284,
    NOT = 285,
    AND = 286,
    XOR = 287,
    OR = 288,
    XNOR = 289,
    SHIFTL = 290,
    SHIFTR = 291,
    PRINT = 292,
    BREAK = 293,
    CONTINUE = 294,
    LABEL = 295,
    GOTO = 296,
    STRINGVAL = 297,
    LSQUAREPR = 298,
    RSQUAREPR = 299,
    DO = 300,
    DEFAULT = 301,
    INTEGER = 302,
    INT = 303,
    FLOAT = 304,
    CHAR = 305,
    VOID = 306,
    STRING = 307,
    INCREMENT = 308,
    DECREMENT = 309,
    BITOR = 310,
    BITXOR = 311,
    BITXNOR = 312,
    BITAND = 313,
    BITNOT = 314,
    LINECOMMENT = 315,
    PRACOMMENT = 316,
    exit_command = 317,
    IFX = 318,
    ELSE = 319,
    PLUS = 320,
    MINUS = 321,
    MULT = 322,
    DIV = 323
  };
#endif
/* Tokens.  */
#define ERROR 258
#define IF 259
#define FOR 260
#define SWITCH 261
#define CASE 262
#define WHILE 263
#define RETURN 264
#define UNTIL 265
#define CONST 266
#define ID 267
#define COLN 268
#define SEMCOLN 269
#define FLOATING 270
#define CHARACTER 271
#define LPR 272
#define RPR 273
#define LBRA 274
#define RBRA 275
#define ASSGN 276
#define COMA 277
#define MOD 278
#define GREATER 279
#define LESS 280
#define EQUALEQUAL 281
#define GREATEREQUAL 282
#define LESSEQUAL 283
#define NOTEQUAL 284
#define NOT 285
#define AND 286
#define XOR 287
#define OR 288
#define XNOR 289
#define SHIFTL 290
#define SHIFTR 291
#define PRINT 292
#define BREAK 293
#define CONTINUE 294
#define LABEL 295
#define GOTO 296
#define STRINGVAL 297
#define LSQUAREPR 298
#define RSQUAREPR 299
#define DO 300
#define DEFAULT 301
#define INTEGER 302
#define INT 303
#define FLOAT 304
#define CHAR 305
#define VOID 306
#define STRING 307
#define INCREMENT 308
#define DECREMENT 309
#define BITOR 310
#define BITXOR 311
#define BITXNOR 312
#define BITAND 313
#define BITNOT 314
#define LINECOMMENT 315
#define PRACOMMENT 316
#define exit_command 317
#define IFX 318
#define ELSE 319
#define PLUS 320
#define MINUS 321
#define MULT 322
#define DIV 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "y.y" /* yacc.c:1909  */
 char id [256]; int num; double fnum; 

#line 193 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
