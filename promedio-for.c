#include<stdio.h>
#include<stdlib.h>

int i;
int n1;
int num;
int suma;
float promedio;

int main ( )
{
	printf("Programa que promedia 10 numero ciclo for\n");
	printf("Cuantos numeros quiere promediar\n");
	scanf("%d",&n1);
	for(i=1; i<=n1; i++)
	{
		printf("ingrese un numero \n");
		scanf("%d",&num);
		suma=suma+num;
	}
	promedio=(float)suma/n1;
	printf("El resultado de su promedio es: %.1f\n",promedio);

system("pause");
}
