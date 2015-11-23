#include<stdio.h>
#include<stdlib.h>

int arreglo[10];
int i,suma;
float promedio;

int main ( )
{
	printf("Programa que promedia 10 numeros con arreglos \n");
	for(i=0;i<10;i++)
	{	
		printf("ingrese la calificacion del alumno \n");
		scanf("%d",&arreglo[i]);
		suma=suma+arreglo[i];
	}
	promedio=(float)suma/10;
	printf("El resultado de su promedio es: %.1f\n",promedio);		
system("pause");
	
}
