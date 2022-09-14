/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//prototipo de la funcion o declaracion  pedirNumero;
int pedirNumero();

int main(void) {
	setbuf(stdout,NULL);
	int respuesta;
	respuesta = pedirNumero();
	printf("el numero ingresado es %d",respuesta);

	return EXIT_SUCCESS;
}
int pedirNumero()
{
	//cuerpo de mi funcion
	int numero;
	 printf("ingrese un numero");
	 scanf("%d",&numero);


	return numero;//porque se que algo tengo que retornar
}
