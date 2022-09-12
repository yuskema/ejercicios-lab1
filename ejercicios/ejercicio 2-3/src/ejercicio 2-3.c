/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;

	printf("ingrese un numero");
	scanf("%d",&numeroIngresado);

	if(numeroIngresado%2==0)
	{
		printf("el numero ingresado es par");
	}
	else
	{
		printf("El numero ingresado es inpar");
	}

	return 0;
}
