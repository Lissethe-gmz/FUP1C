#include<stdio.h> //programa que pide dos números, los suma, resta, multiplica y divide.
#include<stdlib.h>

int n1;
int n2;
int suma;
int resta;
int mul;
float div;

int main ()
{//inicio
	printf("Dame un numero: ");
	scanf("%d",&n1);	
	printf("Dame un numero: ");
	scanf("%d",&n2);
	suma = n1 + n2;
	resta = n1 - n2;
	mul = n1 * n2;
	div=n1/n2;
	printf("el resultado de: %d + %d es: %d\n" , n1,n2,suma);
	printf("el resultado de: %d - %d es: %d\n" , n1,n2,resta);
	printf("el resultado de: %d * %d es: %d\n" , n1,n2,mul);
	printf("el resultado de: %d / %d es: %.1f" , n1,n2,div);
	
	system("pause");	
		
}//fin

