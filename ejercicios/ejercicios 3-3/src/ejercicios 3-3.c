/*
 ============================================================================
 Name        : ejercicios.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 */

#include <stdio.h>
#include <stdlib.h>
int EsPar(int numero);


int main(void)
{
	setbuf(stdout,NULL);
	int numeropedido;
	int resultado;
	printf("ingrese un numero");
	scanf("%d",&numeropedido);
	resultado=EsPar(numeropedido);
	if(resultado==1)
	{
		printf("el numero es par");
	}
	else
	{
		printf("el numero es impar");
	}



	return EXIT_SUCCESS;


}
int EsPar(int numero)
{
	int retorno;
	if(numero %2 ==0)
	{
		retorno = 1;
	}
	else
	{
		retorno = 0;
	}

	return retorno;
}
