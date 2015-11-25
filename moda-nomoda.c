#include<stdio.h>
#include<stdlib.h>

int arreglo[10];
int i,suma,moda,mayor,bandera;
float promedio;
int posibles[11];

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

	for(i=0;i<11;i++)
	{
		posibles[i]=0;
	}
	for(i=0;i<10;i++)
	{
		posibles[arreglo[i]]++;
	}
	moda=0;
	mayor=posibles[0];
	for(i=1;i<11;i++)
	{
				if(posibles[i] == mayor)
	{
		bandera=1;
	}
		if(posibles[i]>mayor)
		{
			mayor=posibles[i];
			moda= i;
			bandera=0;
		}
	}
	if(bandera ==0 )
	{
		printf("La moda es %d\n", moda);
	}
	else
	{
		printf("No hay moda\n");
	}

system("pause");
	
}
