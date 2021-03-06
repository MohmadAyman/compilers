%{
	void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>
	%}
%union { char id [256]; int num; double fnum; };  /* Yacc definitions */
	%start line
	%token ERROR
	%token IF
	%token ELSE
	%token FOR
	%token SWITCH
	%token CASE
	%token WHILE
	%token RETURN
	%token UNTIL   
	%token CONST 
	%token <id> ID
	%token COLN
	%token SEMCOLN
	%token <fnum> FLOATING
	%token CHARACTER
	%token LPR
	%token RPR
	%token LBRA
	%token RBRA
	%token ASSGN
	%token COMA
	%token MOD
	%token GREATER
	%token LESS
	%token EQUALEQUAL
	%token GREATEREQUAL
	%token LESSEQUAL
	%token NOTEQUAL
	%token NOT
	%token AND
	%token XOR
	%token OR
	%token XNOR
	%token SHIFTL
	%token SHIFTR
	%token PRINT
	%token BREAK
	%token CONTINUE
	%token LABEL
	%token GOTO
	%token STRINGVAL
	%token LSQUAREPR
	%token RSQUAREPR     
	%token DO
	%token DEFAULT
	%token <num> INTEGER
	%token INT
	%token FLOAT
	%token CHAR
	%token VOID
	%token STRING
	%token INCREMENT
	%token DECREMENT
	%token BITOR
	%token BITXOR
	%token BITXNOR
	%token BITAND
	%token BITNOT
	%token LINECOMMENT
	%token PRACOMMENT
	%token exit_command
	%type <id> exp term declare OP
	%type <num> assignment
	%left GREATER  LESS  EQUALEQUAL GREATEREQUAL  LESSEQUAL   NOTEQUAL 
	%left  AND XOR OR  XNOR 
	%left PLUS MINUS 
	%left MULT DIV MOD
	%%

/* descriptions of expected inputs     corresponding actions (in C) */

	line    :  assignment SEMCOLN {printf("    ");}
	|  PRINT exp SEMCOLN {printf("    " );}
	| declare SEMCOLN     {printf("  ");}
	|  line assignment SEMCOLN {printf("   ");}
	|  line PRINT exp SEMCOLN {printf("    " );}
	| line declare SEMCOLN     {printf("  ");}
	;

	assignment : ID ASSGN exp  {printf("POP %s  \n", $1);} 
                   | ID INCREMENT {printf("INC %s  \n", $1);}
                   | ID DECREMENT {printf("DEC %s  \n", $1);}
	declare : INT ID {printf(" Define INT %s   ",$2);}			;
	| CONST INT ID  {printf(" constant Define INT %s   ",$3);} ;
	exp    	: 
	| exp PLUS  exp  {printf(" POP AX \n POP BX \n ADD AX , BX \n Push AX \n  ");}  
	| exp  MINUS exp  {printf(" POP AX \n POP BX \n SUB AX , BX \n Push AX \n  ");}
	|  exp DIV  exp      {printf(" POP AX \n POP BX \n DIV AX , BX \n Push AX \n  ");}
	|  exp MULT exp    {printf(" POP AX \n POP BX \n Mul AX , BX \n Push AX \n  ");}
	|  exp MOD exp     {printf(" POP AX \n POP BX \n Mod AX , BX \n Push AX \n  ");}
	|  exp AND  exp     {printf(" POP AX \n POP BX \n And AX , BX \n Push AX \n  ");}
	|  exp XOR  exp      {printf(" POP AX \n POP BX \n Xor AX , BX \n Push AX \n  ");}
	|  exp OR   exp       {printf(" POP AX \n POP BX \n Or AX , BX \n Push AX \n  ");}
	| exp XNOR  exp      {printf(" POP AX \n POP BX \n Xnor AX , BX \n Push AX \n  ");}

	| exp GREATER exp   {printf(" POP AX \n POP BX \n CMPG AX , BX \n Push AX \n  ");}
	|  exp LESS exp         {printf(" POP AX \n POP BX \n CMPL AX , BX \n Push AX \n  ");}
	| exp EQUALEQUAL exp   {printf(" POP AX \n POP BX \n CMPE AX , BX \n Push AX \n  ");}
	|  exp GREATEREQUAL exp   {printf(" POP AX \n POP BX \n CMPGE AX , BX \n Push AX \n  ");}
	|  exp LESSEQUAL exp     {printf(" POP AX \n POP BX \n CMPLE AX , BX \n Push AX \n  ");}
	| exp NOTEQUAL exp    {printf(" POP AX \n POP BX \n CMPNE AX , BX \n Push AX \n  ");}
	| LBRA exp RBRA       
	| NOT exp    {printf(" POP AX \n NOT AX \n Push AX \n  ");}
	| INTEGER  {printf(" Push %d \n ",$1 );} 
	| ID  {printf(" Push %s \n ",$1 );}
	;

	OP :  PLUS 
	|  MINUS
	|   DIV  
	|   MULT
	|   MOD
	|   AND
	|   XOR
	|   OR
	|   XNOR
	| GREATER
	|  LESS
	| EQUALEQUAL
	|  GREATEREQUAL
	|  LESSEQUAL
	|  NOTEQUAL
	;



	%%                     
/* C code */


	int main (void) {
		return yyparse ( );
	}
	void yyerror (char *s) {fprintf (stderr, "%s\n", s);}
