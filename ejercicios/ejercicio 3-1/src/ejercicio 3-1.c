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
int numeroEntero();
int main(void) {
	setbuf(stdout,NULL);

	int mostrar;
	mostrar = numeroEntero();
	printf("el numero entero es %d", mostrar);


	return EXIT_SUCCESS;
}
int numeroEntero()
{
	int numero;
	numero=4;
	return numero;
}
