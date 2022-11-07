/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-1: Pedir 5 n�meros enteros, guardarlos en un Array. Calcular la sumatorio
				de los mismos y mostrar los impares ingresados.
 */
int utn_pedirEnteroSec(int* numero, char* msjeError, int reintentos, int tam);

#include <stdio.h>
#include <stdlib.h>
#include "pedirNum.h"
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);
	int numeros[TAM];
	int i;
	int acumulador;
	acumulador = 0;
	//pido 5 numeros!
	if((utn_pedirEnteroSec(numeros, "Ingrese un numero correcto", 2, TAM)) == 0)
	{
		printf("Los numeros son: %d", numeros[i]);
	}
	//utn_getPedirNumero(numeros, "ERROR", 2);

	// Sumatoria
	for(i=0 ; i<TAM ; i++)
	{
		acumulador+=numeros[i];

		//Muestro impares!
		if(numeros[i]%2 != 0 )
		{
			printf("Nro impar %d\n", numeros[i]);
		}
	}
	printf("La sumatoria de los numeros es: %d", acumulador);

	return EXIT_SUCCESS;
}

int utn_pedirEnteroSec(int* numero, char* msjeError, int reintentos, int tam)
{
	int retorno = -1;
	int i;

	do
	{
		if(numero != NULL && msjeError != NULL && reintentos >= 0)
		{
			//pedir numero de forma secuencial:
			for(i=0 ; i<tam ; i++)
			{
				printf("Ingrese un numero entero: ");
				scanf("%d", &numero[i]);
			}
			break; // HAY QUE CORTAR LA ITERACION!!!!!!!!
			retorno = 0;
		}else{ // POR QUE NO ME RESTA LOS REINTENTOS. SE CUELGA DIRECTAMENTE

			printf("%s", msjeError);
			reintentos--;
		}

	}while(reintentos >= 0);


	return retorno;
}
