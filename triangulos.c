#include<stdio.h>//tipos de triangulos
#include<stdlib.h>

int main ( )
{
	int lado1, lado2, lado3;
	printf("Ingrese el lado 1\n");
	scanf("%d",&lado1);
	printf("Ingrese el lado 2\n");
	scanf("%d",&lado2);
	printf("Ingrese el lado 3\n");
	scanf("%d",&lado3);
	if(lado1==lado2)
	{
		if(lado2==lado3)
		{
			printf("Triangulo equilatero\n");
		}
		else
			printf("triangulo isoceles\n");
	}
	else
		if (lado1==lado3)
		{
			if(lado2!=lado3)
			{
				printf("triangulo isoceles\n");
			}
			
		}
		else
			if(lado2==lado3)
			{
				printf("triangulo isoceles\n");
			}
			else 
				printf("triangulo escaleno\n");
	system("pause");
}
