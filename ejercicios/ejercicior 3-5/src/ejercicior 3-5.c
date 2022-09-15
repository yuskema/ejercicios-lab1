/*
 ============================================================================
 Name        : ejercicior.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);
 */

#include <stdio.h>
#include <stdlib.h>
//prototipo o declaracion;
int Restar1(int numero1, int numero2);
int Restar2(void);
void Restar3(int numero1, int numero2);
void Restar4(void);

int main()
{
	setbuf(stdout,NULL);

	Restar4();


	return EXIT_SUCCESS;
}
void Restar4(void)
{
	int numeroA;
	int numeroB;
	int resta;
	printf("ingrese un numero ");
	scanf("%d", &numeroA);
	printf("ingrese un numero ");
	scanf("%d", &numeroB);
	resta = numeroA-numeroB;
	printf("el resultado de la resta es: %d",resta);
}
/*
 *3)
int main()
{
	setbuf(stdout,NULL);
	int numeroA;
	int numeroB;

	printf("ingrese un numero ");
	scanf("%d", &numeroA);
	printf("ingrese un numero ");
	scanf("%d", &numeroB);
	Restar3(numeroA, numeroB);



	return EXIT_SUCCESS;
}
void Restar3(int numero1, int numero2)
{
	int resta;
	resta = numero1-numero2;
	printf("el resultado de la resta es : %d", resta);
}*/

/*
 * 2)
int main(void)
{
	setbuf(stdout,NULL);
	int resultado;
	resultado = Restar2();	//invacacion de funcion
	printf("el resultado de la resta es %d",resultado);

	return EXIT_SUCCESS;
}
//cuerpos de la funcion
int Restar2(void)
{
	int numeroA;
	int numeroB;
	int resta;

	resta = numeroA - numeroB;
	printf("ingrese un numero ");
	scanf("%d", &numeroA);
	printf("ingrese un numero ");
	scanf("%d", &numeroB);
	resta= numeroA-numeroB;

	return resta;

}*/

/*
 *
 * 1)int main(void) {
	setbuf(stdout,NULL);

	int numeroA;
	int numeroB;
	int resta;
	printf("ingrese un numero ");
	scanf("%d", &numeroA);
	printf("ingrese un numero ");
	scanf("%d", &numeroB);
	resta =Restar1(numeroA, numeroB); // invocando la funcion
	printf("la resta de los numero ingresado es: %d",resta);



	return EXIT_SUCCESS;
}
int Restar1(int numero1, int numero2)
{
	int retorno;
	retorno =numero1-numero2;
	return retorno;
}*/

