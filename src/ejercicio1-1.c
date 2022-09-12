/*
 ============================================================================
 Name        : ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numerouno;
	int numerodos;
	int suma;
	numerouno=3;
	numerodos=2;
    suma= numerouno + numerodos;

    printf("La suma entre los dos numero es: %d",suma);



	return EXIT_SUCCESS;
}
