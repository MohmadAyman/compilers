#include <stdio.h>
#include "scanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char* names[] = { "ERROR", "IF", "ElSE" 
, "FOR" ,"SWITCH" , "CASE" 
, "WHILE" , "RETURN" ,"UNTIL" , 
 "CONST" , "ID" , "COLN",
 "SEMCOLN" , "FLOATING" , "CHARACTER" ,
 "LPR","RPR", "LBRA", 
 "RBRA","ASSN","COMA",
 "WHITESPACE","PLUS","MINUS",
 "DIV","MULT","MOD",
 "GREATER", "LESS","EQUALEQUAL"
 ,"GREATEREQUAL", "LESSEQUAL","NOTEQUAL",
 "NOT","AND","XOR" 
 ,"OR", "XNOR","SHIFTL",
 "SHIFTR", "PRINT","BREAK"
 ,"CONTINUE","LABEL", "GOTO",
 "STRINGVAL","LSQUAREPR","RSQUAREPR"
 ,"DO","DEFAULT","INTEGER"
 ,"INT","FLOAT", "CHAR"
 ,"VOID","STRING","INCREMENT",
 "DECREMENT" ,"BITOR","BITXOR" ,
 "BITXNOR","BITAND","BITNOT",
 "LINECOMMENT","PRACOMMENT"};
 

int main(void)
{	int ntoken, vtoken;
	ntoken = yylex();
	while(ntoken){
		if(ntoken==ERROR){
			printf("syntax error in line %d, found %s\n ",
		yylineno, yytext );
		return 1;
		}
		if(ntoken == WHITESPACE)
		{printf("%d :  %s\n", ntoken, names[ntoken-1]);}
		else printf("%d :  %s   value = %s\n", ntoken, names[ntoken-1], yytext );
        ntoken = yylex();		
		//vtoken = yylex();

				 
		}
    printf("%d :  %s\n", ntoken, names[ntoken-1]);    
	
    return 0;
}