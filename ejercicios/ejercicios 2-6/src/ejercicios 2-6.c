/*
 ============================================================================
 Name        : ejercicos2-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-6:
Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	char arrayLetras[5];
	int contadorm=0;

	//cargar el array
	printf("ingrese 5 letras");
	for(int i=0; i<5;i++ )
	{
		fflush(stdin);
		scanf("%c",&arrayLetras[i]);
	}

	//recorriendo el array
	printf("las letras ingresadas son : \n");
	for(int i = 0; i<5;i++)
	{
		printf("%c",arrayLetras[i]);
	}
	for(int i = 0; i<5;i++)
	{
		if(arrayLetras[i] == 'm')
		{
			contadorm=contadorm +1;
		}

	}
	printf("la cantidad de m son: %C\n",contadorm);



	return EXIT_SUCCESS;
}
