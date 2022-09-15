/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.

 */

#include <stdio.h>
#include <stdlib.h>
float PedirNumero();


int main(void)
{
	setbuf(stdout,NULL);

	float numeroRetornado;
	numeroRetornado = PedirNumero();
	printf("el numero retornado es: %.2f",numeroRetornado);


	return EXIT_SUCCESS;
}

float PedirNumero()
{
	float numeroFloat;
	printf("ingrese un numero decimal: ");
	scanf("%f", &numeroFloat);
	return numeroFloat;
}
