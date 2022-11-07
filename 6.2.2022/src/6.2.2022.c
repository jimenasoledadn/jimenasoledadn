/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 6-2: Realizar un programa que permita el ingreso de 10 n�meros enteros
				(positivos y negativos). Necesito generar un listado de los n�meros positivos de
				manera creciente y negativos de manera decreciente. (Como m�ximo 5 estructuras
				repetitivas)
					[Listado 1: 4, 5, 6, 10, 18, 29]
					[Listado 2 : -1,-5,-9,-12]
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void swapAscenEntero(int array[], int cantidad);
void swapDescEntero(int array[], int cantidad);

int main(void) {
	setbuf(stdout, NULL);
	//int aux;

	int vec[TAM] = {5,6,-9,10,-1,4,29,-5,-12,18};
	int i;


	/*for(i=0 ; i<TAM-1 ; i++)
	{
		for(int j=i+1 ; j<TAM ; j++)
		{
			if(vec[i]>vec[j])
			{
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
	*/
	swapAscenEntero(vec, TAM);
	//Mostrar LISTADO positivos crecientes
	printf("Listado 1: ");
		for( i=0 ; i<TAM ; i++)
		{
			if(vec[i] > 0)
			{
				printf("\nPositivo/Ascendente: %d", vec[i]);
			}
		}


	swapDescEntero(vec, TAM);
	printf("\n\nListado 2: ");
		for( i=0 ; i<TAM ; i++)
		{
			if(vec[i] < 0)
			{
				printf("\nNegativo/Descendente: %d", vec[i]);
			}
		}


	return EXIT_SUCCESS;
}

void swapAscenEntero(int array[], int cantidad)
{
	//int retorno = -1;
	int auxInt;
	if(array != NULL && cantidad > 0)
	{
		for(int i=0 ; i<cantidad-1 ; i++)
		{
			for(int j=i+1 ; j<cantidad ; j++)
			{
				if(array[i]>array[j])
				{
					auxInt = array[i];
					array[i] = array[j];
					array[j] = auxInt;
				}
			}
		}
	}
}


void swapDescEntero(int array[], int cantidad) // POR QUE NO me deja si devuelve un entero int
{
	//int retorno = -1;
	int auxInt;
	if(array != NULL && cantidad > 0)
	{
		for(int i=0 ; i<cantidad-1 ; i++)
		{
			for(int j=i+1 ; j<cantidad ; j++)
			{
				if(array[i]<array[j])
				{
					auxInt = array[j];
					array[j] = array[i];
					array[i] = auxInt;
				}
			}
		}
		//retorno = 0;
	}
	//return retorno;
}
