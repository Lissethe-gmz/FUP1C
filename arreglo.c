#include<stdio.h>
#include<stdlib.h>

int arreglo[10];
int i;

int main ( )
{
	arreglo[0]=10;
	arreglo[1]=20;
	arreglo[2]=30;
	arreglo[3]=40;
	arreglo[4]=50;
	arreglo[5]=60;
	arreglo[6]=70;
	arreglo[7]=80;
	arreglo[8]=90;
	arreglo[9]=100;
	
	printf("%d\n", arreglo[2]);
	
	for(i=0;i<10;i++)
	{
		arreglo[i]=i;
	}	
		printf("%d\n", arreglo[2]);
	for(i=0;i<10;i++)
	{
		printf("%d\n", arreglo[i]);
	}		
system("pause");
	
}
