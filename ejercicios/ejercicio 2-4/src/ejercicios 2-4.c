/*
 ============================================================================
 Name        : ejercicios 2-4
 Author      : EMANUEL VALVERDE
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-4:
Ingresar 8 números enteros, distintos de cero. Mostrar:
a. El menor número ingresado.xx
b. De los pares el mayor número ingresado.xx
c. Producto de los negativos.
d. En qué lugar fue ingresado el mayor numero
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numeroIngresado;
	int numeroMenor;
	int numeroparMayor;
	int acumuladornegarivo;
	int factor;
	int numeromayoringresado;
	int lugardeingreso;



	int flag1=0;
	int flag2=0;
	int flag3=0;
	//int factor;

	for(int i=0;i<8;i++)
	{
		printf("Ingrese numeros");
		scanf("%d",&numeroIngresado);
		if((flag1 == 0) || numeroMenor > numeroIngresado )
		{
			numeroMenor=numeroIngresado;
			flag1 = 1;
		}

		if (numeroIngresado%2==0)
		{
			if((flag2 ==0) || numeroparMayor < numeroIngresado)
			{
				numeroparMayor=numeroIngresado;
				flag2=1;

			}

		}
		if(numeroIngresado < 0)
		{
			acumuladornegarivo += numeroIngresado;
		}
		factor *= acumuladornegarivo;

		if((flag3==0) || numeromayoringresado > numeroIngresado )
		{
			numeromayoringresado=numeroIngresado;
			lugardeingreso = i;
			flag3=1;
		}





	}

	printf("el  menor numero ingresado es: %d",numeroMenor);
	printf("\nDe los pares el mayor número ingresado: %d",numeroparMayor);
	printf("\nel mayor numero fue ingresado en el lugar: %d",lugardeingreso);


	return 0;
}
