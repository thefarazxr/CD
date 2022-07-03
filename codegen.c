#include<stdio.h>
int main()
{
	int i=0,ch,k=3;
	char a[100];
	printf("\n enter a string:");
	scanf("%s",a);
	printf("\n1.single adress\n 2.Double Adress\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("\nLOAD %c\n",a[2]);
				while(a[i]!='\0')
				{ 
					if(a[i+3]=='+')
						printf("\nADD %c\n",a[i+4]);
					else if(a[i+3]=='-')
						printf("\nSUB %c\n",a[i+4]);
					i=i+2;
				}
				printf("\nSTORE %c\n",a[0]);
				break;
		case 2: while(a[k]!='\0')
				{
					if(a[k]=='+')
						printf("\nADD %c %c\n",a[2],a[k+1]);
					else if(a[k]=='-')
						printf("\nSUB %c %c\n",a[2],a[k+1]);
					k=k+2;
				}
				if(a[1]=='=')
					printf("\nMOV %c %c\n",a[0],a[2]);
				break;
	}
}