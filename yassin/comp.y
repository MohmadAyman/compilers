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

assignment : ID ASSGN exp  {printf("  ");}
declare : INT ID {printf(" Define INT %s   ",$2);}			;
| CONST INT ID  {printf(" constant Define INT %s   ",$3);} ;
exp    	:   {printf("   ");}
| exp OP exp   {printf("  ");}
| LBRA exp RBRA      {printf("   " );}
| NOT exp
| INTEGER 
| ID
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
