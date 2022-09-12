/*
 ============================================================================
 Name        : ejercicio1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9”
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroMayor;

	printf("\n ingrese un numero: ");
	scanf("%d", &numeroUno);
	printf("\ningrese un numero: ");
	scanf("%d", &numeroDos);
	printf("\n ingrese un numero: ");
	scanf("%d", &numeroTres);

	if(numeroUno> numeroDos && numeroUno > numeroTres)
	{
		numeroMayor=numeroUno;
	}
	else
	{
		if(numeroDos> numeroUno && numeroDos > numeroTres)
		{
			numeroMayor=numeroDos;
		}
		else
		{
			numeroMayor=numeroTres;
		}
	}

	printf("El mayor de los numeros es: %d",numeroMayor);

	return 0;
}
