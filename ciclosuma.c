#include<stdio.h>
#include<stdlib.h>

int final;
int i;
int suma;
int num;
int main ( )
{
	printf("Hasta que numero quiere sumar:\n");
	scanf("%d",&final);
	i=0;
	suma=0;
	num=0;
	while(num<=final)
	{
		suma=suma+i;
		num=num+1;
		i=i+1;
	}
	printf("%d\n",suma);
system("pause");
}

