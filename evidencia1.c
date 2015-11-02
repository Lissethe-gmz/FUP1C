#include<stdio.h>//tienda con menú
#include<stdlib.h>

int tienda,n1,p1,p2,p3,p4,p5,pan,refresco,papas,donas,paletas,ganancias;

int main( )
{
	printf("Quieres ver las ganancias presiona 1\nQuieres comprar presiona 2\n");
	scanf("%d",&n1);
	if(n1==1)
	{
		ganancias=500;
		printf("Las ganancias actualmente son %d\n", ganancias);
	}
	else
	{
		if(n1==2)
		{
			printf("MENU\n");
			printf("Pan 2\nRefresco 12\nPapas 12\nDonas 10\nPaletas 5\n");
			printf("Si va a compar Pan presione 1\nSi va a comparar refresco presione 2\nSi va a comparar papas presione 3\nSi va a comparar donas presione 4\nSi va a comparar paletas presione 5\n");
			scanf("%d",&tienda);
			switch(tienda)
			{
				case 1:{
					printf("Cuantas piezas de pan quiere?");
					scanf("%d",&p1);
					pan=p1*2;
					printf("El pan cuesta 2 pesos asi que su total es: %d\n" ,pan);
					break;
				}
				case 2:{
					printf("Cuantos refrescos quiere?");
					scanf("%d",&p2);
					refresco=p2*12;
					printf("El refresco cuesta 12 pesos asi que su total es: %d\n" ,refresco);
					break;
				}
				case 3:{
					printf("Cuantas piezas de papas quiere?");
					scanf("%d",&p3);
					papas=p3*12;
					printf("Las papas cuestan 12 asi que su total es: %d\n" ,papas);
					break;
				}
				case 4:{
					printf("Cuantas piezas de donas quiere\n?");
					scanf("%d",&p4);
					donas=p4*10;
					printf("El pan cuesta 2 asi que su total es: %d\n" ,donas);
					break;
				}
				case 5:{
					printf("Cuantas paletas quiere?\n");
					scanf("%d",&p5);
					paletas=p5*5;
					printf("El pan cuesta 2 asi que su total es: %d\n" ,paletas);
					break;
				}
				default:{
					printf("Solo presione las teclas indicadas\n");
					break;
				}
			}
		}
		
	}
	system("pause");
	
}



