#include <stdio.h>
#include "scanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char* names[] = {NULL, "db_type", "db_name", "error"};

int main(void)
{
	int ntoken, vtoken;
	ntoken = yylex();
	while(ntoken){
		printf("%d\n", ntoken);
		ntoken = yylex();
		if(yylex()==ERROR){
			printf("syntax error in line %d, found %s\n",
		yylineno, yytext);
		return 1;
		}
		vtoken = yylex();
		switch(ntoken){
			case LPR:
		if(vtoken == ERROR){	//  TODO
			printf("%s is set to %s\n", names[ntoken],
		 yytext);
		return 1;
		}

	}
    return 0;
}
}
