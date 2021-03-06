/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "y.y" /* yacc.c:339  */

	void yyerror (char *s);
static int lbl=0;
int ass1;
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>
#include "semen.h"
	

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 10 "y.y" /* yacc.c:355  */
 char id [256]; int num; double fnum; 

#line 256 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 271 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    85,    85,    86,    91,    92,    93,    94,    94,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   100,   101,   102,   108,   108,   113,
     114,   118,   119,   122,   123,   124,   125,   128,   134,   140,
     141,   141,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ERROR", "IF", "FOR", "SWITCH", "CASE",
  "WHILE", "RETURN", "UNTIL", "CONST", "ID", "COLN", "SEMCOLN", "FLOATING",
  "CHARACTER", "LPR", "RPR", "LBRA", "RBRA", "ASSGN", "COMA", "MOD",
  "GREATER", "LESS", "EQUALEQUAL", "GREATEREQUAL", "LESSEQUAL", "NOTEQUAL",
  "NOT", "AND", "XOR", "OR", "XNOR", "SHIFTL", "SHIFTR", "PRINT", "BREAK",
  "CONTINUE", "LABEL", "GOTO", "STRINGVAL", "LSQUAREPR", "RSQUAREPR", "DO",
  "DEFAULT", "INTEGER", "INT", "FLOAT", "CHAR", "VOID", "STRING",
  "INCREMENT", "DECREMENT", "BITOR", "BITXOR", "BITXNOR", "BITAND",
  "BITNOT", "LINECOMMENT", "PRACOMMENT", "exit_command", "IFX", "ELSE",
  "PLUS", "MINUS", "MULT", "DIV", "$accept", "Program", "Instruction",
  "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "caseunit", "$@12", "cases", "Instructions", "assignment",
  "declare", "$@13", "exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -62

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define YYTABLE_NINF -32

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     183,   -16,    54,    54,    54,   -43,   -15,   -62,    -9,    54,
      54,   -62,   -62,    -1,     0,    54,    10,   120,    11,     2,
       4,   259,    54,   -62,   329,   329,   329,     7,     1,    54,
     -62,   -62,   -62,   183,   308,   329,   183,    -7,     3,    -6,
     -62,   -62,    54,   -62,   -62,   -62,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,   191,     6,   183,   183,     5,   -62,   329,   130,   -62,
     -62,    16,    54,     8,   329,   -62,    44,    44,    44,    44,
      44,    44,    14,    14,    14,    14,    -6,    -6,   -62,   -62,
      54,    18,   -62,   -62,    54,   -62,    12,    54,   329,   -62,
     183,   213,    54,    18,    13,   329,   -62,   283,   183,   -31,
      54,   237,   -62,   -62,   -62,   -62,   -62,   329,   -62,   -12,
     183,    15,   183,    23,   -62,   183,   -62,   183,   -62,   -62
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     0,     0,    61,    26,    22,     0,
       0,    15,    60,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    61,    19,    11,    13,     0,     0,     0,
      34,    35,    25,     7,     0,    58,     7,    38,     0,    59,
       1,     3,     0,     6,     4,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     7,     0,    36,    33,     7,    23,
      57,     0,     0,     0,     8,    46,    51,    52,    53,    54,
      55,    56,    47,    48,    49,    50,    42,    43,    45,    44,
       0,     0,    12,    14,     0,    32,     0,     0,    37,    40,
       7,     0,     0,    29,     0,    39,    24,     0,     7,     0,
       0,     0,    30,    20,    16,    41,     9,    17,    27,     0,
       7,     0,     7,     0,    10,     7,    28,     7,    18,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,    24,    -4,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -61,   -25,   -62,   -62,
     -62,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    16,    17,    18,   100,   120,    63,    64,    36,   121,
      62,   119,    33,    96,   103,   122,   104,    69,    19,    20,
     108,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    25,    26,    22,    28,    27,    29,    34,    35,    32,
      40,    37,    38,    39,    72,    42,    43,    46,    44,    65,
      61,    66,    73,    91,    97,   102,    94,    67,    99,    68,
     106,   113,    71,   116,   123,   125,   127,    46,    30,    31,
      74,    41,   112,    95,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    92,
      93,    59,    60,     0,    68,     0,    23,    46,     0,     0,
      98,     0,     0,     9,     0,    53,    54,    55,    56,    57,
      58,    59,    60,     0,    10,     0,     0,     0,   101,     0,
       0,     0,   105,     0,     0,   107,   109,     0,     0,     0,
     111,    12,     0,     0,   115,     0,     0,     0,   117,    57,
      58,    59,    60,     0,     0,     0,   124,     0,   126,     0,
      15,   128,     0,   129,    -7,     1,     2,     0,     3,     0,
       4,     5,     6,     0,     7,     1,     2,     8,     3,     9,
       4,     5,     6,     0,     7,     0,     0,     8,   -31,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,    11,     0,    12,    13,     0,
       0,    14,     0,     0,     0,    11,     0,    12,    13,     0,
       0,    14,     0,     0,     0,     0,    15,     0,     1,     2,
       0,     3,     0,     4,     5,     6,    15,     7,     0,     0,
       8,     0,     9,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    46,    47,    48,    49,    50,    51,
      52,     0,    53,    54,    55,    56,   110,     0,    11,     0,
      12,    13,     0,     0,    14,     0,    46,    47,    48,    49,
      50,    51,    52,     0,    53,    54,    55,    56,     0,    15,
     118,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      46,    47,    48,    49,    50,    51,    52,     0,    53,    54,
      55,    56,     0,    45,     0,     0,     0,     0,    57,    58,
      59,    60,    46,    47,    48,    49,    50,    51,    52,     0,
      53,    54,    55,    56,     0,     0,     0,   114,     0,     0,
       0,     0,    57,    58,    59,    60,    46,    47,    48,    49,
      50,    51,    52,     0,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60,    70,     0,
       0,    46,    47,    48,    49,    50,    51,    52,     0,    53,
      54,    55,    56,     0,     0,     0,     0,     0,    57,    58,
      59,    60,    46,    47,    48,    49,    50,    51,    52,     0,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,    58,    59,    60
};

static const yytype_int8 yycheck[] =
{
       2,     3,     4,    19,    19,    48,    21,     9,    10,    18,
       0,    12,    12,    15,    21,     4,    14,    23,    14,    12,
      22,    20,    19,    17,     8,     7,    21,    29,    20,    33,
      18,    18,    36,    64,    46,    20,    13,    23,    53,    54,
      42,    17,   103,    68,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    63,
      64,    67,    68,    -1,    68,    -1,    12,    23,    -1,    -1,
      72,    -1,    -1,    19,    -1,    31,    32,    33,    34,    65,
      66,    67,    68,    -1,    30,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    -1,    -1,    97,   100,    -1,    -1,    -1,
     102,    47,    -1,    -1,   108,    -1,    -1,    -1,   110,    65,
      66,    67,    68,    -1,    -1,    -1,   120,    -1,   122,    -1,
      66,   125,    -1,   127,     4,     5,     6,    -1,     8,    -1,
      10,    11,    12,    -1,    14,     5,     6,    17,     8,    19,
      10,    11,    12,    -1,    14,    -1,    -1,    17,    18,    19,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    51,    -1,    -1,    -1,    45,    -1,    47,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    66,    -1,     5,     6,
      -1,     8,    -1,    10,    11,    12,    66,    14,    -1,    -1,
      17,    -1,    19,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    13,    -1,    45,    -1,
      47,    48,    -1,    -1,    51,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    -1,    66,
      13,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    -1,    14,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     8,    10,    11,    12,    14,    17,    19,
      30,    45,    47,    48,    51,    66,    70,    71,    72,    87,
      88,    90,    19,    12,    90,    90,    90,    48,    19,    21,
      53,    54,    18,    81,    90,    90,    77,    12,    12,    90,
       0,    70,     4,    14,    14,    14,    23,    24,    25,    26,
      27,    28,    29,    31,    32,    33,    34,    65,    66,    67,
      68,    90,    79,    75,    76,    12,    20,    90,    71,    86,
      20,    71,    21,    19,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      13,    17,    71,    71,    21,    86,    82,     8,    90,    20,
      73,    90,     7,    83,    85,    90,    18,    90,    89,    71,
      13,    90,    85,    18,    14,    71,    64,    90,    13,    80,
      74,    78,    84,    46,    71,    20,    71,    13,    71,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    72,    73,    74,
      71,    75,    71,    76,    71,    77,    71,    78,    71,    79,
      80,    71,    81,    82,    71,    71,    71,    84,    83,    85,
      85,    86,    86,    87,    87,    87,    87,    88,    88,    88,
      89,    88,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     0,     0,     0,
       8,     0,     4,     0,     4,     0,     6,     0,    10,     0,
       0,    10,     0,     0,     5,     2,     1,     0,     5,     1,
       2,     1,     2,     3,     2,     2,     3,     4,     2,     5,
       0,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:
#line 94 "y.y" /* yacc.c:1646  */
    {Createscope();}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "y.y" /* yacc.c:1646  */
    {printf("POP AX%d \n CMP AX%d ,0 \n JNE lbl%d\n jmp wrong%d  \n lbl%d:\n",GetLab(),GetLab(),GetLab(),GetLab(),GetLab());}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "y.y" /* yacc.c:1646  */
    {printf("wrong%d:",GetLab()); removescope();}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 95 "y.y" /* yacc.c:1646  */
    { Createscope(); int x = GetLab(); printf("pop AX%d\n  CMP AX%d,0\n JNE startloop%d\n jmp other%d\n startloop%d:\n",x,x,x,x,x);}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "y.y" /* yacc.c:1646  */
    { int y = GetLab(); printf("CMP AX%d,0\n JNE startloop%d \n other%d:\n",y,y,y); removescope();  }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "y.y" /* yacc.c:1646  */
    {Createscope(); int x = GetLab(); printf("pop AX%d\n  CMP AX%d,0\n JE startloop%d\n jmp other%d\n startloop%d:\n",x,x,x,x,x);}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "y.y" /* yacc.c:1646  */
    { int y = GetLab(); printf("CMP AX%d,0\n JE startloop%d \n other%d:\n",y,y,y); removescope();  }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "y.y" /* yacc.c:1646  */
    {Createscope(); printf("startloop%d:\n",GetLab());}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "y.y" /* yacc.c:1646  */
    {int x = GetLab(); printf("pop AX%d \n CMP AX%d,0\n JNE startloop%d\n ",x,x,x); removescope();}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "y.y" /* yacc.c:1646  */
    { Createscope(); int x = GetLab(); printf("pop cx%d pop DX%d pop BX%d \n loop%d:\n",x,x,x,x);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "y.y" /* yacc.c:1646  */
    {int y = GetLab(); printf("  \n sub CX%d ,DX%d  CMP CX%d , BX%d \n jle loop%d\n ",y,y,y,y,y);removescope();}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "y.y" /* yacc.c:1646  */
    {Createscope(); printf("pop AX%d",GetLab());}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "y.y" /* yacc.c:1646  */
    {printf("lblcase%d:",lbl);lbl++;}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 99 "y.y" /* yacc.c:1646  */
    {printf("label: end%d",GetLab());removescope();}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 100 "y.y" /* yacc.c:1646  */
    {Createscope();}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 100 "y.y" /* yacc.c:1646  */
    {removescope();}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 108 "y.y" /* yacc.c:1646  */
    {Createscope(); printf(" lblcase%d: \n POP DX%d \n cmp AX%d, DX%d \n JNE lblcase%d \n  ",lbl,GetOuterLab(),GetOuterLab(),GetOuterLab(),lbl+1);lbl++;}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "y.y" /* yacc.c:1646  */
    {printf("JMP end%d \n",GetOuterLab());removescope();}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 122 "y.y" /* yacc.c:1646  */
    { if(checkass((yyvsp[-2].id))==0)yyerror("error failed to assign variable"); printf("POP %s  \n", (yyvsp[-2].id));}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "y.y" /* yacc.c:1646  */
    { if(checkass((yyvsp[-1].id))==0)yyerror("error failed to assign variable"); printf("INC %s  \n", (yyvsp[-1].id));}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 124 "y.y" /* yacc.c:1646  */
    { if(checkass((yyvsp[-1].id))==0)yyerror("error failed to assign variable"); printf("DEC %s  \n", (yyvsp[-1].id));}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "y.y" /* yacc.c:1646  */
    { if(checkfunction((yyvsp[-2].id))==0)yyerror("there is no function to call"); printf("CALL %s  \n", (yyvsp[-2].id));}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "y.y" /* yacc.c:1646  */
    { 
		  if(InsertVariable((yyvsp[-2].id), "Int", 0)== 0) 
	      yyerror("error the variable already defined");  
		  printf(" POP AX Define INT %s = AX  ",(yyvsp[-2].id));
		  }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 135 "y.y" /* yacc.c:1646  */
    { 
	      if(InsertVariable((yyvsp[0].id), "Int", 0)==0)
		  yyerror("error the variable already defined");
		  printf(" Define INT %s = 0  ",(yyvsp[0].id));
	    }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "y.y" /* yacc.c:1646  */
    { if(InsertVariable((yyvsp[-2].id), "Int", 1)==0)yyerror("error the variable already defined"); printf("POP constant \n");  printf(" constant Define INT ; %s   ",(yyvsp[-2].id));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 141 "y.y" /* yacc.c:1646  */
    { if(Insertfunction((yyvsp[-2].id), "void")==0)yyerror("error the function already defined");   Createscope();printf("JMP %s%d \n PROC %s \n" , (yyvsp[-2].id) , GetLab() , (yyvsp[-2].id) );}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 141 "y.y" /* yacc.c:1646  */
    {printf("Return %s%d: \n" , (yyvsp[-4].id), GetLab());}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 146 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n ADD AX , BX \n Push AX \n  ");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n SUB AX , BX \n Push AX \n  ");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 148 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n DIV AX , BX \n Push AX \n  ");}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 149 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n Mul AX , BX \n Push AX \n  ");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n Mod AX , BX \n Push AX \n  ");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n And AX , BX \n Push AX \n  ");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 152 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n Xor AX , BX \n Push AX \n  ");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n Or AX , BX \n Push AX \n  ");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n Xnor AX , BX \n Push AX \n  ");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 155 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n CMPG AX , BX \n Push AX \n  ");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 156 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n CMPL AX , BX \n Push AX \n  ");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 157 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n CMPE AX , BX \n Push AX \n  ");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 158 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n CMPGE AX , BX \n Push AX \n  ");}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 159 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n CMPLE AX , BX \n Push AX \n  ");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 160 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n POP BX \n CMPNE AX , BX \n Push AX \n  ");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 162 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n NOT AX \n Push AX \n  ");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 163 "y.y" /* yacc.c:1646  */
    {printf(" POP AX \n  NEG AX  \n Push AX \n  ");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 164 "y.y" /* yacc.c:1646  */
    {printf(" Push %d \n ",(yyvsp[0].num) );}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 165 "y.y" /* yacc.c:1646  */
    { if(checkvariable((yyvsp[0].id))==0) yyerror ("the ID isn't defined in any scope");    printf(" Push %s \n ",(yyvsp[0].id) );}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1778 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 168 "y.y" /* yacc.c:1906  */
                     
/* C code */


	int main (void) {
	    Initscope();
		return yyparse ( );
	}
	void yyerror (char *s) {fprintf (stderr, "%s\n", s); exit(0);}
