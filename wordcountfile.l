%{
    #include <stdio.h>
    int wc=0,lc=0,cc=0;
%}
word [^ \n\t]+ 
eol \n
%%
{word} {wc++;cc+=yyleng;}
{eol} {lc++;cc++;}
.  {cc++;}
%% 

   main(int argc, char **argv)
   {
    if(argc>1)
    {
        FILE *f;
        f=fopen(argv[1],"r");
        if(!f)
        {
            printf("File not found\n");
            return 0;
        }
        yyin=f;
    }
         yylex();
         printf("NO OF CHAR=%d\n words=%d \n lines=%d\n",cc,wc,lc);
   }