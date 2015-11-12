#include<stdio.h>
#include<stdlib.h>

int num;
int a,digito,c;

int main( )
{
	printf("Programa que separa los numeros\n");
	printf("Dame un numero:\n");
	scanf("%d",&num);
	printf("Que digito deseas:\n");
	scanf("%d",&digito);
	
	c=1;
	do
	{
		a=num%10;
		num=num/10;	
		if(c == (4-digito+1))
		{
			printf("El numero es %d\n",a);
		}
		c++;
	}while(num !=0);
system("pause");
}

