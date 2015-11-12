#include<stdio.h>
#include<stdlib.h>

int num;
int a;

int main( )
{
	printf("Programa que separa los numeros\n");
	printf("Dame un numero:\n");
	scanf("%d",&num);
	
	do
	{
		a=num%10;
		num=num/10;
		printf("El numero es %d\n",a);
		
	}while(num !=0);
	
	system("pause");
}
