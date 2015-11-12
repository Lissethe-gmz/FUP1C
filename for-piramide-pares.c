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
		j=1;
		do
		{
			printf("%d",i);
			j++;
		}while((j<=i)&&(i%2==0));
	printf("\n");
	}
	system("pause");
}
