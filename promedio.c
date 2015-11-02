#include<stdio.h>//promedio de  numeros usando while
#include<stdlib.h>

int a,b,c,cont;
float total;

int main ( )
{
	cont=1;
	c=0;
	total=0;
	while(cont<=5)
	{
		printf("Dame un numero: ");
		scanf("%d",&a);
		printf("Dame un numero: ");
		scanf("%d",&b);
		c=a+b;
		total=c+total;
		cont=cont+1;
	}
	total=(float)total/10;
	printf("El resultado de su promedio es: %.1f\n",total);
	
system("pause");	
	
}
