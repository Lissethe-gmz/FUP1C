#include<stdio.h>
#include<stdlib.h>

int arreglo[10];
int i,suma,moda,grande;
float promedio;

int main ( )
{
	printf("Programa que promedia 10 numeros y da la moda con arreglos \n");
	for(i=0;i<10;i++)
	{	
		printf("ingrese la calificacion del alumno \n");
		scanf("%d",&arreglo[i]);
		suma=suma+arreglo[i];
	}
	promedio=(float)suma/10;
	printf("El resultado de su promedio es: %.1f\n",promedio);
	
	for ( i= 0; i < 10; i++ ) 
	{
		if ( arreglo[i] > grande ) 
		{
		grande = arreglo[i];
		moda = i;
		}
	}
	printf("La moda es: %d\n", moda);

system("pause");
	
}
