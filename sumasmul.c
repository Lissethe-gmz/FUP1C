#include<stdio.h>
#include<stdlib.h>

int n1,n2,num,con;

int main ( )
{
	printf("ingrese el primer numero:\n");
	scanf("%d",&n1);
	printf("ingrese el segundo numero:\n");
	scanf("%d",&n2);
	num=0;
	con=0;
	while(con<=n2)
	{
		con=con+1;
		num=num+n1;
	}
	num=num-n1;
	printf("El resultado de su multiplicion es: %d\n",num);
system("pause");
	
}
