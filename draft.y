%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>
int ValuesInt[10];
int ValuesFloat[10];
char Symbols[10];

int symbolVal(char symbol);
int updateSymbols(char symbol);
void updateSymbolValInt(char symbol, int val);
int computeSymbolIndex(char token);

void updateSymbolValFloat(char symbol, float val);
float symbolValFloat(char symbol);
%}

%union {int num; char id; float fnum;}         /* Yacc definitions */
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
%type <id> exp term declare
%type <num> assignment 
%type <fnum> floatAssignment expF termF
%left PLUS MINUS 
%left MULT DIV
%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment SEMCOLN		{printf("END");}
	| declare SEMCOLN		{printf("Declare");}
	| PRINT exp SEMCOLN	{printf("Printing %d\n",$2);}
	| exit_command SEMCOLN	{exit(EXIT_SUCCESS);}
	| line assignment SEMCOLN	{printf("END");}
	| line declare SEMCOLN 	{printf("Declare");}
	| line PRINT exp SEMCOLN	{printf("Printing %d\n", $3);}
	| line exit_command SEMCOLN	{exit(EXIT_SUCCESS);}
        ;

assignment : term ASSGN exp  { updateSymbolValInt($1,$3);printf("Printing %d\n", $3); }
			;
declare : INT term  { updateSymbols($2); }
	|FLOATING termF {updateSymbols($2);}
			;
exp    	: term                  {$$ = $1; printf("ib term");}
		| LBRA exp RBRA           { $$ = $2; }
       	| exp PLUS term          {$$ = $1 + $3;}
       	| exp MINUS term          {$$ = $1 - $3;}
		| exp MULT term          {$$ = $1 * $3;}
		| exp DIV term          {$$ = $1 / $3;}
       	;

term   	: INTEGER                {$$ = $1;}
	| ID			{if (updateSymbols($1)==0) {$$ = symbolVal($1);}} 
        ;

floatAssignment : termF ASSGN expF { updateSymbolValFloat($1,$3);printf("Printing a float\n"); }
			;
expF    : termF                  {$$ = $1;}
	| LBRA expF RBRA           { $$ = $2; }
       	;
termF  	: FLOATING                {$$ = $1;}
	| ID			{$$ = symbolValFloat($1);} 
        ;

%%                     /* C code */

int computeSymbolIndex(char token)
{
	int i =-1;
	while ((Symbols[i+1])!="\0" && i<10) 
	{
		i++;
		if (strcmp(&Symbols[i], &token) == 0)
		{
			return i;	
		}
	}
	return 100;
}

int updateSymbols(char symbol)
{
	if (!(computeSymbolIndex(symbol)==100))
	{
		int i =-1;
		while ((Symbols[i+1])!='\0') 
		{
			i++;
		}
		Symbols[i+1] = symbol;
		return 1;
	}
	return 0;
}

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	printf("Bucket val %d", ValuesInt[bucket]);
	return ValuesInt[bucket];
}

float symbolValFloat(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	printf("Bucket val %d", bucket);
	return ValuesFloat[bucket];
}

/* updates the value of a given symbol */
void updateSymbolValInt(char symbol, int val)
{
	printf("in update Symol \n");	
	int bucket = computeSymbolIndex(symbol);
	ValuesInt[bucket] = val;
	printf("out update Symol %d \n",val);	
}

void updateSymbolValFloat(char symbol, float val)
{
	printf("in update Symol \n");	
	int bucket = computeSymbolIndex(symbol);
	ValuesFloat[bucket] = val;
	printf("out update Symol %f \n",val);	
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<10; i++) {
		ValuesInt[i] = 0;
	}
	int j;
	for(j=0; j<10; j++) 
	{
		Symbols[j]="\0";
	}
	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}
