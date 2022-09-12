/*
 ============================================================================
 Name        : ejercicios1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
caso de que no exista también informarlo.
Ejemplo:
1 5 3 el 3 es del medio
5 1 5 no hay número del medio
3 5 1 el 3 es del medio
3 1 5 el 3 es del medio
5 3 1 el 3 es del medio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroDelMedio;

	printf("\ningresar un numero: ");
	scanf("%d",&numeroUno);
	printf("\ningresar un numero: ");
	scanf("%d",&numeroDos);
	printf("\ningresar un numero: ");
	scanf("%d",&numeroTres);

	if((numeroDos<numeroUno&&numeroUno>numeroTres) || (numeroDos>numeroUno&&numeroUno<numeroTres ))
	{
		numeroDelMedio=numeroUno;
	}
	else
	{
		if((numeroUno<numeroDos&&numeroDos>numeroTres) || (numeroUno>numeroDos&&numeroDos<numeroTres))
		{
			numeroDelMedio=numeroDos;
		}
		if((numeroUno<numeroTres&&numeroTres>numeroDos) || (numeroUno>numeroTres&&numeroTres<numeroDos))
		{
			numeroDelMedio=numeroTres;
		}
		else
		{
			printf("no hay numero del medio");
		}

	}
	printf("el numero del medio es: %d",numeroDelMedio);
	return EXIT_SUCCESS;
}
