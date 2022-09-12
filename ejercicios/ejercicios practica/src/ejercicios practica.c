/*
 ============================================================================
 Name        : ejercicios.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 pedir 5 numero y dar como resultado maximo y minimo
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(void) {
	int maximo;
	int minimo;
	int i;
	int bufferInt;//donde se guarda el dato
	int flag =TRUE;


	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero %d\n",i+1);
		scanf("%d",&bufferInt);//perdir el dato (guardar el dato en una variable  )
		if(flag==TRUE)
		{
			maximo =bufferInt;
			minimo =bufferInt;
			flag =FALSE;
		}
		else
		{
			if(bufferInt > maximo )
			{
				maximo = bufferInt;
			}
			if(bufferInt< minimo)
			{
				minimo = bufferInt;
			}
		}
	}
	printf("el valor minimo es: %d y el valor maximo es: %d",minimo,maximo);

	return 0;
}
