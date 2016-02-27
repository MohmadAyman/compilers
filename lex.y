%{
#include <stdio.h>
%}
%%
%%
int main(int argc,char* argv[])
{
	yyin = fopen(argv[1],"r");
	fclose(yyin);
	return 0; 
}

