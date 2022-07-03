#include <stdio.h>
#include <string.h>

char alpha[20]={0};
char beta[20]={0};
char gram[20]={0};
int i=0,j=0,k=0;

void addtoBeta(char);
void addtoAlpha(char);
 void ELR() //ELR-Eliminate Left Recursion
 {
    for (i=0; gram[i]!='\0'; i++)
    {
        if(gram[i]=='>')
        break;
    }

    for(i=i+1; gram[i]!='\0'; i++)
    {
        if(gram[i]==gram[0])
        {
            for(i=i+1; gram[i]!='\0' && gram[i]!='|'; i++)
            addtoAlpha(gram[i]);
        
            addtoAlpha(';');
        }
        else
        {
            for(; gram[i]!='\0' && gram[i]!='|'; i++)
            addtoBeta(gram[i]);
        
            addtoBeta(';');
        }

    }
    addtoAlpha('\0');
    addtoBeta('\0');

}

void addtoAlpha(char ch)
{
    alpha[j]=ch;
    j++;
}
 
void addtoBeta(char ch)
{
    beta[k]=ch;
    k++;
}

int main()
{
printf("\nenter the grammer:\n");
scanf("%s",gram);
ELR();

if(strlen(alpha)==0)
{
printf("\nThe grammer is not left recursive");
return 0;
}
else
{
    printf("\nThe grammer after eliminating left recursion is:\n"); 
    
    printf("\n%c->",gram[0]);
    for(i=0;beta[i+1]!='\0';i++)
    {
     if(beta[i]==';')
         printf("X|");
    else
        printf("%c",beta[i]);
    }
    printf("X");

    printf("\n X->");
     for(i=0;alpha[i+1]!='\0';i++)
    {
     if(alpha[i]==';')
         printf("X|");
    else
        printf("%c",alpha[i]);
    }
    printf("X|Epsilon \n");
}
return 0;

}

