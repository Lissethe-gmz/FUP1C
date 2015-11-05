#include<stdio.h>
#include<stdlib.h>

int final;
int i;
int j;

int main ( )
{
	printf("Programa que muestra una piramide de nuemeros\n");
	printf("Dame un numero:\n");
	scanf("%d",&final);
	i=1;
	while(i<=final)
	{	
		j=1;
		while(j<=i)
		{
			printf("%d",i);
			j++;
		}
		printf("\n");
		i++;//i =i+1;	
	}
system("pause");
}

