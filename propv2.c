#include<stdio.h>//propina
#include<stdlib.h>

int main ( )
{
	float total,prop20,prop16,prop10,n1,n2,n3;
	printf("Ingrese el valor total de su cuenta en pesos\n");
	scanf("%f",&total);
	if(total<=1000)
	{
	prop20=total*0.20;
	n1 =total+prop20;
	printf("el total de la propina es:%.1f\n" , prop20);
	printf("el total de la cuenta es:%.1f\n" , n1);
	}
	else
		if(total<=5000)
		{
		prop16=total*0.16;
		n2=total+prop16;
		printf("el total de la propina es:%.1f\n" , prop16);
		printf("el total de la cuenta es:%.1f\n" , n2);
		}
		else
		{
		prop10=total*0.10;
		n3=total+prop10;
		printf("el total de la propina es:%.1f\n" , prop10);
		printf("el total de la cuenta es:%.1f\n" , n3);
		}
	
	system("pause");
	
}
