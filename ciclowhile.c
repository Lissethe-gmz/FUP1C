#include<stdio.h>
#include<stdlib.h>

int final;
int i;
int suma;
int main ( )
{
	printf("Hasta que numero quiere contar:\n");
	scanf("%d",&final);
	suma=0;
	i=1;
	while(i<=final)
	{
		i=i+1;
		suma=suma+1;
		printf("%d\n",suma);
	}
system("pause");
}

