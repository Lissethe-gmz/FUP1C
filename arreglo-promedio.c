#include<stdio.h>
#include<stdlib.h>

int arreglo[10];
int i,suma;
float promedio;

int main ( )
{
	suma=0;
	promedio=0;
	for(i=0;i<10;i++)
	{	
		printf("ingrese un numero \n");
		scanf("%d",&arreglo[i]);
		suma=suma+arreglo[i];
	}
	promedio=(float)suma/10;
	printf("El resultado de su promedio es: %.1f\n",promedio);		
system("pause");
	
}
