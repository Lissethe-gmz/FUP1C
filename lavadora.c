#include<stdio.h>//lavadora
#include<stdlib.h>

int main ( )
{
	int peso,n1;
	printf("Ingrese el peso de su ropa en kilogramos");
	scanf("%d",&peso);
	if(peso<=10)
	{
		printf("Minimo de agua\n");
	}
	else
		if(peso<=15)
		{
		printf("Medio de agua\n");
		}
		else
			if(peso<=20)
			{
				printf("Maximo de agua\n");
			}
			else
				printf("No lava\n");
				
	if(peso<=20)
	{
		printf("Para indicarle cuanto tiempo debe lavar:\n");
		printf("Si su ropa es delicada presione 1\nSi su ropa es normal presione 2\nSi su ropa es sucia presione 3\n");
		scanf("%d",&n1);
		if(n1==1)
		{
			printf("5 minutos\n");
		}
	else
		if(n1==2) 
		{
			printf("10 minutos\n");
		}
		else
			if(n1==3)
			{
				printf("20 minutos\n");
			}
			else
				printf("Solo puede presionar los numeros indicados intentelo nuevamente\n");
	}

	system("pause");	
	
}
