#include<stdio.h> //Libreria de E/S
#include<stdlib.h>

int n1;
int n2;
int resultado;

int main ()
{//inicio
		printf("Dame un numero: ");
		scanf("%d",&n1);	
		printf("Dame un numero: ");
		scanf("%d",&n2);
		resultado = n1 + n2;
		printf("el resultado %d + %d es: %d\n" , n1,n2,resultado);
		
		system("pause");
		
}//fin

