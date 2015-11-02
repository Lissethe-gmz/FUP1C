#include<stdio.h>//Examen
#include<stdlib.h>

int main ()
{
	
	float mega,bits,byte,giga,tera,kilo;
	
	printf("Dame un numero en Megabytes: ");
	scanf("%f",&mega);
	
	kilo=mega*1024;
	byte=kilo*1024;
	bits=byte*8;
	giga=mega/1024;
	tera=giga/1024;
	
	printf ("el resultado en kilobytes es: %.0f\n", kilo);
	printf ("el resultado en bytes es: %.0f\n", byte);
	printf ("el resultado en bits es: %.0f\n", bits);
	printf ("el resultado en giabytes es : %f\n", giga);
	printf ("el resultado en terabytes es: %f\n", tera);
	
	system("pause");	
}

