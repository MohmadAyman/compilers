#include <stdio.h>
#include "scanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char* names[] = { "KEYWORD", "ID", "COLN" , "OP" ,"SEMCOLN" , "NUMBER" , "CHAR" , "LPR"};

int main(void)
{
	int ntoken, vtoken;
	ntoken = yylex();
	while(ntoken){
		printf("%d\n", ntoken);
		ntoken = yylex();
		if(yylex()==ERROR){
			printf("syntax error in line %d, found %s\n ",
		yylineno, yytext );
		return 1;
		            }
		vtoken = yylex();
                 printf("vtoken  %d ", vtoken); 
		switch(vtoken)
			{
			case KEYWORD:
				printf("KEYWORD :D %s\n", names[ntoken]);
				break;
			case ID:
				printf("Identifier\n");
				break;
			case COLN:
				printf("Colon");
				break;
			case OP:
				printf("operator");
				break;
			case SEMCOLN:
				printf("Semi Colon ");
				break;
			case NUMBER:
				printf("num ");
				break;
			case CHAR:
				printf("character ");
				break;
			case LPR:
				printf("left prases ");
				break;
			case RPR:
				printf("right prases ");
				break;
			case LBRA:
				printf("left bracket ");
				break;
			case RBRA:
				printf("right bracket");
				break;
			case COMP:
				printf("comparison");
				break;
			case ASSGN:
				printf("assign ");
				break;
			case COMA:
				printf("coma ");
				break;
			case WHITESPACE:
				printf("whitespace ");
				break;
			case LOGICAL:
				printf("logical");
				break;
              
		if(vtoken == ERROR){
                  printf("syntax error in line %d, found %s \n , expected %d",yylineno, yytext , vtoken);
				}
		//else 	printf("%s is set to %s\n", names[ntoken],
		// yytext);	
		
		return 1;
		}

	}
    return 0;
}