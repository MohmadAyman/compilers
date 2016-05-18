%{
	void yyerror (char *s);
static int lbl=0;
int ass1;
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>
#include "semen.h"
	%}
%union { char id [256]; int num; double fnum; };  /* Yacc definitions */
	%start Program
	%token ERROR
	%token IF
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
	%type <id> exp declare 
	%type <num> assignment
	%nonassoc IFX
    %nonassoc ELSE
	%left GREATER  LESS  EQUALEQUAL GREATEREQUAL  LESSEQUAL   NOTEQUAL 
	%left  AND XOR OR  XNOR 
	%left PLUS MINUS 
	%left MULT DIV MOD
	%%

/* descriptions of expected inputs     corresponding actions (in C) */

	Program    :  
	  Instruction 
    | Instruction Program   
	;
	
			
	Instruction :
	  declare SEMCOLN    
	| exp SEMCOLN
	| assignment SEMCOLN
	| {Createscope();} IF exp {printf("POP AX%d \n CMP AX%d ,0 \n JNE lbl%d\n jmp wrong%d  \n lbl%d:\n",GetLab(),GetLab(),GetLab(),GetLab(),GetLab());} Instruction ELSE {printf("wrong%d:",GetLab()); removescope();}Instruction 								
	| WHILE exp { Createscope(); int x = GetLab(); printf("pop AX%d\n  CMP AX%d,0\n JNE startloop%d\n jmp other%d\n startloop%d:\n",x,x,x,x,x);} Instruction { int y = GetLab(); printf("CMP AX%d,0\n JNE startloop%d \n other%d:\n",y,y,y); removescope();  } 
    | UNTIL exp {Createscope(); int x = GetLab(); printf("pop AX%d\n  CMP AX%d,0\n JE startloop%d\n jmp other%d\n startloop%d:\n",x,x,x,x,x);} Instruction { int y = GetLab(); printf("CMP AX%d,0\n JE startloop%d \n other%d:\n",y,y,y); removescope();  }  	
	| DO {Createscope(); printf("startloop%d:\n",GetLab());} Instruction WHILE exp SEMCOLN {int x = GetLab(); printf("pop AX%d \n CMP AX%d,0\n JNE startloop%d\n ",x,x,x); removescope();}																
	| FOR LBRA  exp  COLN exp COLN exp { Createscope(); int x = GetLab(); printf("pop cx%d pop DX%d pop BX%d \n loop%d:\n",x,x,x,x);} RBRA   Instruction {int y = GetLab(); printf("  \n sub CX%d ,DX%d  CMP CX%d , BX%d \n jle loop%d\n ",y,y,y,y,y);removescope();}				
	| SWITCH exp {Createscope(); printf("pop AX%d",GetLab());} LPR cases RPR {printf("lblcase%d:",lbl);lbl++;}DEFAULT COLN Instruction {printf("label: end%d",GetLab());removescope();}	 							
	| LPR {Createscope();} Instructions {removescope();}RPR										
    | LPR RPR	 
	| SEMCOLN  
	;
	
	 
	
	caseunit:
		CASE exp COLN {Createscope(); printf(" lblcase%d: \n POP DX%d \n cmp AX%d, DX%d \n JNE lblcase%d \n  ",lbl,GetOuterLab(),GetOuterLab(),GetOuterLab(),lbl+1);lbl++;} Instruction {printf("JMP end%d \n",GetOuterLab());removescope();}				
			
		;
	
	cases:
		caseunit							
		| caseunit cases					
		;
	
	Instructions:
	    Instruction		
		| Instruction Instructions 					
	    ;
		
	assignment : ID ASSGN exp  { if(checkass($1)==0)yyerror("error failed to assign variable"); printf("POP %s  \n", $1);}
               | ID INCREMENT { if(checkass($1)==0)yyerror("error failed to assign variable"); printf("INC %s  \n", $1);}
               | ID DECREMENT { if(checkass($1)==0)yyerror("error failed to assign variable"); printf("DEC %s  \n", $1);}
			   | ID LBRA RBRA { if(checkfunction($1)==0)yyerror("there is no function to call"); printf("CALL %s  \n", $1);}
               ;
				  
	declare :  INT ID ASSGN exp 
	      { 
		  if(InsertVariable($2, "Int", 0)== 0) 
	      yyerror("error the variable already defined");  
		  printf(" POP AX Define INT %s = AX  ",$2);
		  }		  
    | INT ID 
	   { 
	      if(InsertVariable($2, "Int", 0)==0)
		  yyerror("error the variable already defined");
		  printf(" Define INT %s = 0  ",$2);
	    }	
	| CONST INT ID ASSGN exp { if(InsertVariable($3, "Int", 1)==0)yyerror("error the variable already defined"); printf("POP constant \n");  printf(" constant Define INT ; %s   ",$3);} 
	| VOID ID LBRA RBRA { if(Insertfunction($2, "void")==0)yyerror("error the function already defined");   Createscope();printf("JMP %s%d \n PROC %s \n" , $2 , GetLab() , $2 );}   Instruction {printf("Return %s%d: \n" , $2, GetLab());}   
	;
	
	
	exp    	: 
	  exp PLUS  exp  {printf(" POP AX \n POP BX \n ADD AX , BX \n Push AX \n  ");}  
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
	| MINUS exp  {printf(" POP AX \n  NEG AX  \n Push AX \n  ");}
	| INTEGER  {printf(" Push %d \n ",$1 );} 
	| ID  { if(checkvariable($1)==0) yyerror ("the ID isn't defined in any scope");    printf(" Push %s \n ",$1 );}
	;

	%%                     
/* C code */


	int main (void) {
	    Initscope();
		return yyparse ( );
	}
	void yyerror (char *s) {fprintf (stderr, "%s\n", s); exit(0);}
