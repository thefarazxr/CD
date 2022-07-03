%{
#include<stdio.h>
%}

%%
[+-]?([0-9]+|([0-9]*\.[0-9]+)([eE][+-]?[0-9]+)?) {printf("Number \n");}
. {printf("NOt a Number \n");}
%%

main()
{
    yylex();
}