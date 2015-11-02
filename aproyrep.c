#include<stdio.h>//programa que muestra si estas reprobado o aprobado
#include<stdlib.h>

int calificacion;

int main ( )
{
	printf("programa que te dice si reprobaste o no\n");
	printf("Introduce tu calificacion ");
	scanf("%d",&calificacion);
	printf("tu calificacion es: %d\n",calificacion);
	if(calificacion>=7)
	{
		printf("Aprobado\n");
	}
	else
	{
		printf("Reprobado\n");
		
	}
	
	system("pause");
}
