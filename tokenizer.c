#include<stdio.h>
#include<string.h>

void main()
{
char a[10];
int i,x;

printf("Enter the expression:\n");

gets(a);

for(i=0;a[i]!='\0';i++)
{

  if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
	printf("\n %c is a variable",a[i]);
   else if(a[i]=='=')
	 printf("\n %c is an assignment operator",a[i]);
    else if (a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
	 printf("\n %c is arithmetic operator",a[i]);
    else if(a[i]>='0'&&a[i]<='9')
	printf("\n %c is an Integer",a[i]);
     else
	 printf("\n %c is a other character",a[i]);
}
}
