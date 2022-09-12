/*
 ============================================================================
 Name        : ejercicio 2-1
 Author      : EMANUEL VALVERDE
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero =0;
	int num;
	int acumulador =0;
	float promedio;

	while(numero <=7)
	{
		printf("ingresar un numero negativo: ");
		scanf("%d",&num);
		if(num >=0)
		{
			printf(" Error, vuelva a ingresar el numero negativo: ");
			scanf("%d",&num);
		}
		acumulador = acumulador+num;
		numero++;
	}
	promedio= acumulador / numero;
	printf("el promedio es de: %.2f", promedio);


	return EXIT_SUCCESS;
}
