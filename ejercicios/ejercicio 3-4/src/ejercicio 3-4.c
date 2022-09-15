/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.
 */

#include <stdio.h>
#include <stdlib.h>
int PedirNumero();
void MostrarNumero(int numero);

int main(void)
{
	setbuf(stdout,NULL);

	int numeroRetornado;
	numeroRetornado = PedirNumero();//invocamos funcio 1
	MostrarNumero(numeroRetornado);


	return EXIT_SUCCESS;
}

int PedirNumero()
{
	int numeroIngresado;
	printf("ingrese un numero del 1 al 5: ");
	scanf("%d", &numeroIngresado);

	while(numeroIngresado <1 || numeroIngresado >5)
	{
		printf("ERROR, ingrese un numero del 1 al 5");
		scanf("%d", &numeroIngresado);
	}
	return numeroIngresado;
}



void MostrarNumero(int numero)
{
	printf("el numero recibido es %d",numero);
}



/*Manera 1

int main(void)
{
	setbuf(stdout,NULL);

	int numeroRetornado;
	int resultadoValidacion;
	numeroRetornado = PedirNumero();//invocamos funcio 1
    resultadoValidacion = ValidarNumero(numeroRetornado);//usao la funcion 2
   if(resultadoValidacion == 1)
   {
	 MostrarNumero(numeroRetornado);
   }
   else
   {
	   printf("ERROR, ingrese un numero entre el 1 y 5");

   }




	return EXIT_SUCCESS;
}

int PedirNumero()
{
	int numeroIngresado;
	printf("ingrese un numero del 1 al 5: ");
	scanf("%d", &numeroIngresado);
	return numeroIngresado;
}

int ValidarNumero(int numero)
{
	int retorno;
	if(numero>1 && numero <5)
	{
		retorno=1;
	}
	else
	{
		retorno=0;
	}
	return retorno;



}

void MostrarNumero(int numero)
{
	printf("el numero recibido es %d",numero);
}*/



