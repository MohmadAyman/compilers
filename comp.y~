%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>
int ValuesInt[1000];
char Symbols*[1000];
int symbolVal(char *symbol);
void updateSymbols(char *symbol);
void updateSymbolValInt(char *symbol, int val);
%}

%union {int num; char *id;}         /* Yacc definitions */
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
%token FLOATING
%token CHARACTER
%token LPR
%token RPR
%token LBRA
%token RBRA
%token ASSGN
%token COMA
%token WHITESPACE
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
%type <id> assignment
%type <id> declare exp term
%left PLUS MINUS 
%left MULT DIV

%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment ';'		{;}
		| declare ';'			{;}
        ;

assignment : ID ASSGN exp  { updateSymbolValInt($1,$3); }
			;
declare : INT ID  { updateSymbols($2); }
			;
exp    	: term                  {$$ = $1;}
       	| exp PLUS term          {$$ = $1 + $3;}
       	| exp MINUS term          {$$ = $1 - $3;}
		| exp MULT term          {$$ = $1 - $3;}
		| exp DIV term          {$$ = $1 - $3;}
		| LBRA exp RBRA           { $$ = $2; }
       	;
term   	: INTEGER                {$$ = $1;}
		| ID			{$$ = symbolVal($1);} 
        ;

%%                     /* C code */

void updateSymbols(char *symbol)
{
	int i =-1;
	while (*(Symbols[i+1])!='\0') 
	{
		i++;
	}
	Symbols[i+1] = strdup(symbol);
}

int computeSymbolIndex(char *token)
{
	int idx = -1;
	int i =-1;
	while (*(Symbols[i+1])!="\0") 
	{
		i++;
		if (strcmp(Symbols[i], token) == 0)
		{
			return i;
		}
	}
} 

/* returns the value of a given symbol */
int symbolVal(char *symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return ValuesInt[bucket];
}

/* updates the value of a given symbol */
void updateSymbolValInt(char *symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	ValuesInt[bucket] = val;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<1000; i++) {
		ValuesInt[i] = 0;
	}
	int j;
	for(j=0; j<1000; j++) 
	{
		int k;
		for(k=0; k<100; k++)
		{
			char Symbols[j][k]="\0";
		}
	}

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
