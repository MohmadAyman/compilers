%{
void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <string.h>

int symbols[52];
int ValuesInt[10];
int ValuesFloat[10];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void updateSymbolValInt(char symbol, int val);
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
%left PLUS MINUS 
%left MULT DIV
%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment SEMCOLN		{printf("END");}
	| PRINT exp SEMCOLN	{printf("Printing %d\n",$2);}
	| exit_command SEMCOLN	{exit(EXIT_SUCCESS);}
	| line assignment SEMCOLN	{printf("END");}
	| line PRINT exp SEMCOLN	{printf("Printing %d\n", $3);}
	| line exit_command SEMCOLN	{exit(EXIT_SUCCESS);}
        ;

assignment : ID ASSGN exp  { updateSymbolVal($1,$3); }
			;

exp    	: term                  {$$ = $1;}
       	| exp PLUS term          {$$ = $1 + $3;}
       	| exp MINUS term          {$$ = $1 - $3;}
		| exp MULT term          {$$ = $1 * $3;}
		| exp DIV term          {$$ = $1 / $3;}
		| LBRA exp RBRA           { $$ = $2; }
       	;

term   	: INTEGER                {$$ = $1;}
		| ID			{$$ = symbolVal($1);} 
        ;


%%                     /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
}

void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}


/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolValInt(char symbol, int val)
{
	printf("in update Symol \n");	
	int bucket = computeSymbolIndex(symbol);
	ValuesInt[bucket] = val;

	printf("out update Symol %d \n",val);	
}


int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) 
	{
		symbols[i] = 0;
	}
	return yyparse ( );
	}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}