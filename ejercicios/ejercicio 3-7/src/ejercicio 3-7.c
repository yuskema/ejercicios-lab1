/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>
void operacionResta(int numeroA, int numeroB);
void operacionSuma(int numeroA, int numeroB);

int main(void) {
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	char operacion;


	printf("ingrese el primer numero entre 10 y 100");
	scanf("%d",&numero1);
	while(numero1 <10 || numero1>100)
	{
		printf("ERROR, volver a ingresar el primer numero entre 10 a 100");
		scanf("%d",&numero1);
	}
	printf("ingrese el segundo numero entre 10 y 100");
	scanf("%d",&numero2);
	while(numero2 <10 || numero2>100)
	{
		printf("ERROR, volver a ingresar el primer numero entre 10 a 100");
		scanf("%d",&numero2);
	}
	printf("ingrese la operacion que desea, si quiere  sumar ( s ) o restar  (r)");
	fflush(stdin);
	scanf("%c",&operacion);
	while(operacion != 's' && operacion != 'r')
	{
		printf("ERROR, vuelva a ingresar la operacion 's' para sumar o 'r' para restar ");
		fflush(stdin);
		scanf("%c",&operacion);
	}
	if(operacion == 'r')
	{
		operacionResta(numero1, numero2);
	}
	else
	{
		operacionSuma(numero1, numero2);
	}

	return EXIT_SUCCESS;
}
void operacionResta(int numeroA, int numeroB)
{
	int resta;
	resta=numeroA-numeroB;
	printf("el resultado de la resta es: %d",resta);

}
void operacionSuma(int numeroA, int numeroB)
{
	int suma;
	suma=numeroA+numeroB;
	printf("el resultado de la resta es: %d",suma);
}
