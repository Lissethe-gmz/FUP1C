#include<stdio.h>//edad
#include<stdlib.h>

int edad;

int main ( )
{ 
	printf("Programa que te dice la etapa de la vida en la que estas segun tu edad\no");
	printf("Introduce tu edad ");
	scanf("%d",&edad);
	if(edad<=2)
	{
		printf("Eres un bebe\n");
	}
	else
	{
		if(edad<=12)
		{
			printf("Eres un nino\n");
		}
		else 
			if(edad<=18)
			{
				printf("Eres un adolecente\n");
				
			}
			else
				if(edad<=29)
				{
					printf("Eres joven\n");
				}
				else
					if(edad<=59)
					{
					printf("Eres adulto\n");	
					}
					else
						if(edad>=60)
						printf("Eres un adulto mayor\n");
	}
	
	system("pause");	
}
