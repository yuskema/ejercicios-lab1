/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 */

#include <stdio.h>
#include <stdlib.h>
void MostrarNumero(int numero);

int main(void)
{
	setbuf(stdout,NULL);

	int numero = 4;

	MostrarNumero(numero);


	return EXIT_SUCCESS;
}

void MostrarNumero(int numero)
{
	printf("el numero recibido es %d",numero);
}
