#include<stdio.h>
#include<stdlib.h>

int n1,n2,count;

int main ( )
{
	printf("Programa que mustra rangos\n");
	printf("Dame el primer numero:\n");
	scanf("%d",&n1);
	printf("Dame el segundo numero:\n");
	scanf("%d",&n2);
	if(n1<n2)
	{
	count=n2;
		while(count>=n1)
		{
			printf("%d\n",count);
			count--;
		}
	}
	else
	{	
		count=n2;
		while(count<=n1)
		{
			printf("%d\n",count);
			count++;
		}

	}
		
	system("pause");
}
