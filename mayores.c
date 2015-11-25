#include <stdio.h>

int arreglo[10];
int n1=0;
int n2=0;
int i;

 
int main ()
{
	printf("Programa que da el numero mayor y el que sigue \n");
	for (i=0;i<10;i++)
	{
		printf("ingrese la calificacion del alumno \n");
		scanf("%d",&arreglo[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arreglo[i]>n1)
		{
			n1=arreglo[i];
		}
	}
	for(i=0; i<10;i++)
	{
		if(arreglo[i]>n2 && arreglo[i]<n1)
			if(arreglo[i]<n1)
			{
				n2=arreglo[i];
			}
	}	
    printf("El numero mas grande es %d\n", n1);
    printf("El que sigue es: %d\n", n2);
    
system("pause");
}
