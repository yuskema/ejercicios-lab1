/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-5:
Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
al regreso a la presencialidad. De cada persona debemos obtener los siguientes
datos:
número de legajo (4 cifras sin ceros a la derecha),
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad (más de 17),
año de ingreso (validar por favor)
y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por libreta universitaria es de $450.
Se debe informar (solo si corresponde):
a) La cantidad de personas mayores de 60 años.
b) El legajo y edad de la mujer que ingreso hace más tiempo.
c) Cuanto debe abonar la facultad por las libretas sin el descuento
d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
de la libreta se le hace un 25%. Informar los valores si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);


	char respuestas = 's';
	int legajo;
	char estadocivil;
	int edad;
	int anioingreso;
	char genero;

	while(respuestas == 's')
	{
		printf("ingrese su legajo\n");
		scanf("%d", &legajo);

		printf("ingese estado civil ('s' para soltero, 'c' para casado o 'v' viudo)\n");
		fflush(stdin);
		scanf("%c", &estadocivil);

		while(estadocivil!= 's' && estadocivil!= 'c' && estadocivil!= 'v')
		{
			printf("ERROR, ingese estado civil ('s' para soltero, 'c' para casado o 'v' viudo)");
			fflush(stdin);
			scanf("%c",&estadocivil);
		}

		printf("ingrese su edad");
		scanf("%d", &edad);

		while(edad<17)
		{
			printf("ERROR, ingrese su edad");
			scanf("%d", &edad);

		}

		printf("ingrese su año de ingreso");

		scanf("%d", &anioingreso);

		while (anioingreso < 2022)
		{
			printf("ERROR, ingrese su año de ingreso");
			scanf("%d", &anioingreso);
		}

		printf("ingrese su genero ('f' para femenino, 'm' para masculino, 'o' para no binario)\n");
		fflush(stdin);
		scanf("%c", &genero);


		while (genero != 'f' && genero != 'm'  && genero !='o')
		{
			printf("ERROR, ingrese su genero ('f' para femenino, 'm' para masculino, 'o' para no binario)");
			fflush(stdin);
			scanf("%c", &genero);
		}


		printf("\ndesea continuar? ('s' o 'n')");
		fflush(stdin);
		scanf("%c", &respuestas);

	}



	return EXIT_SUCCESS;
}
