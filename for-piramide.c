#include<stdio.h>
#include<stdlib.h>

int final,i,j;

int main ( )
{
	printf("Piramide de numeros con ciclo for\n");
	printf("Hasta que numero quiere que se muestre\n");
	scanf("%d",&final);
	for(i=1; i<=final; i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d", i);	
		}
	printf("\n");
	}
	system("pause");
}
