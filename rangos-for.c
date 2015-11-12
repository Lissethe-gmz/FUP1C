#include<stdio.h>
#include<stdlib.h>

int n1,n2,count;

int main ( )
{
	printf("Programa que mustra rangos con ciclo for\n");
	printf("Dame el primer numero:\n");
	scanf("%d",&n1);
	printf("Dame el segundo numero:\n");
	scanf("%d",&n2);
	
	for(count=n2;count>=n1;count--)
	{
		printf("%d\n",count);	
	}
	for(count=n2;count<=n1;count++)
	{
		printf("%d\n",count);	
	}
}
