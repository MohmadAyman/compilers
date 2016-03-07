%{
#include "scanner.h"
%}
%%
if		return KEYWORD ;
else          return KEYWORD ;
for           return KEYWORD ;
switch        return KEYWORD ;
case         return KEYWORD ;
while         return KEYWORD ;
return        return KEYWORD ;
until         return KEYWORD ;
const         return KEYWORD ;
"("		return LBRA ;
")"		return RBRA ;
":"		return COLN ;
";"		return SEMCOLN;
"[+-/*\]"       return OP;
"{"		return LPR;
"}"		return RPR;
-?[0-9]+\.?[0-9]* return NUMBER;
'.'          return CHAR;
,		return COMA;
=		return ASSGN;
(>)|(<)|(==)|(<=)|(>=)|(<>) return COMP;
"NOT"           return LOGICAL;
"AND"           return LOGICAL;
"XOR"           return LOGICAL;
"OR"            return LOGICAL;
[ \t\n]      return WHITESPACE;
"[_A-Za-z][_A-Za-Z0-9]*" return ID;
.		return ERROR;
%%
int yywrap(void)
{
return 1;
}

