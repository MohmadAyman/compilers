

%{
#include <math.h>	
}%

DIGIT [0-9]
CHAR [a-z]|[A-Z]
%%
username printf("%s",getlogin());

{DIGIT}+ {
			printf("An integer : %s(%d)\n",yytext,atoi(yytext));
		 }
%%

main(argc, argv)
int argc;
char** argv;
{
	++argv,--argc;
	if(argc>0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yylex();
}