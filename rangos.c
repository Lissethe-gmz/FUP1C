#include<stdio.h>
#include<stdlib.h>

int n1,n2,count;

int main ( )
{
	printf("Dame el primer numero:\n");
	scanf("%d",&n1);
	printf("Dame el segundo numero:\n");
	scanf("%d",&n2);
	while(n1<=n2)
	{
		count=n1;
		while(count<=n2)
		{
			printf("%d",n1);
			n1++;
			count++;
		}
		

	}
	

		
	system("pause");
}
