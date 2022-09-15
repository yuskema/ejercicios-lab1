/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 */
void realizarDescuento(int numeroA);

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero1;


	printf("ingre un numero entre 10 y 100");
	scanf("%d",&numero1);
	while(numero1 <10 || numero1 >100)
	{
		printf("ERRRO, vuelva a ingresar un numero del 10 a 100");
		scanf("%d",&numero1);
	}
	realizarDescuento(numero1);



	return EXIT_SUCCESS;
}
void realizarDescuento(int numeroA)
{
	float descuento;

	descuento = (numeroA*5/100)+numeroA;
	printf("el resultado es : %.2f", descuento);


}
