#include<stdio.h>
#include<stdlib.h>

int i;
int n1;

int main ( )
{
	printf("Hasta que numero quiere contar ");
	scanf("%d",&n1);
	for(i=1; i<=n1; i++)
	{
		printf("%d\n", i);
	}
	system("pause");
}
