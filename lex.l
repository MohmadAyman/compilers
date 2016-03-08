%{
#include "scanner.h"
%}
%%
"int" return INT;
"float" return FLOAT;
"char" return CHAR;
"void" return VOID;
"string" return STRING;
"if"		return IF ;	                 
"else"      return ELSE ;
"for"       return FOR ;
"switch"    return SWITCH ;
"case"      return CASE ;
"default" return DEFAULT;
"while"     return WHILE ;
"do"        return DO;   
"return"    return RETURN ;
"until"     return UNTIL ;
"const"     return CONST ;
"("		return LBRA ;
")"		return RBRA ;
":"		return COLN ;
";"		return SEMCOLN;
"+"     return PLUS;
"-"     return MINUS;
"/"     return DIV;
"*"     return MULT;
"\\"     return MOD;    
"{"		return LPR;
"}"		return RPR;
"++"    return INCREMENT;
"--"    return DECREMENT;
-?[0-9]+          return INTEGER;
-?[0-9]+\.?[0-9]* return FLOATING;
'.'          return CHARACTER;
","	 return COMA;
"="	 return ASSGN;
">"  return GREATER;
"<"  return LESS;
"==" return EQUALEQUAL;
"<=" return GREATEREQUAL;
">=" return LESSEQUAL;
"<>" return NOTEQUAL;
"not"           return NOT;
"and"           return AND;
"xor"           return XOR;
"or"            return OR;
"xnor"          return XNOR;
"bitor"         return BITOR;
"bitxor"        return BITXOR; 
"bitxnor"       return BITXNOR;
"bitand"        return BITAND;
"bitnot"        return BITNOT;
"[" return LSQUAREPR;
"]" return RSQUAREPR;
"<<" return SHIFTL;
">>" return SHIFTR;
"print" return PRINT;
"break" return BREAK; 
"continue" return CONTINUE;
"goto" return GOTO;
"/*"(.|[\t\r\n])*"*/" return PRACOMMENT;
[ \t\r\n]+  return WHITESPACE;
[A-Za-z][A-Za-z0-9]*[:] return LABEL;
\"[^"\n]*["]  return STRINGVAL;
"//".*\n return LINECOMMENT;
[_A-Za-z][_A-Za-z0-9]* return ID;
. return ERROR;
%%
int yywrap(void)
{
return 1;
}

