#include<stdio.h>
#include<stdlib.h>

int prof;
int dia;
int noche;
int count;
int metros;

int main ( )

{
	printf("Programa que dice en cuantos dias sale un cangrejo de un agujero\n");
	printf("Cual es la profundidad del agujero:\n");
	scanf("%d",&prof);
	printf("Cuantos metros sale de dia?\n");
	scanf("%d",&dia);
	printf("Cuantos metros sale de noche?\n");
	scanf("%d",&noche);
	
	if(dia>noche)
	{
		count=0;
		if(dia<=prof)
		{	
			for(metros=0;metros<=prof;metros=metros+dia)
			{
				if(metros>=prof)
				{
				count--;
				printf("El cangrejo sale en %d dias\n",count);
				}
				else
				{
				metros=metros-noche;
				count++;
				}
			}
				printf("El cangrejo sale en %d dias\n",count);
		}
		else
		{
				printf("El cangrejo sale en un solo dia\n");
		}
	}	
		else
	{
		printf("El cangrejo no saldra nunca de los nuncas :C\n");
	}
	
system("pause");
}
