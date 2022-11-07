/*
 ============================================================================
 Name        : swapeoEj08Sept.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int j;
	int vec[MAX] = {6,3,8,9,1}; //Hardcodeo!!!
	int aux;

	//Mostrar el array
	for(i=0; i<MAX; i++)
	{
		printf("\nPosicion %d, elemento %d", i, vec[i]);
	}

	//Ordenar
	for(i=0; i<MAX-1 ; i++)
	{
		for(j=i+1 ; j<MAX ; j++)
		{
			if(vec[i]>vec[j]) //Ordenamiento de MAYOR a Menor
			{              //si estoy haciendo el intercambio (en este caso) cuando i es MAYOR a j
						// quiero decir	que al numero mayor lo estoy mandando para atras, y el menor para adelante!!!
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}

	//Mostrar el Array Ordenado!!
	for(i=0 ; i<MAX ; i++)
	{
		printf("\nOrdenado ascendente, Posicion %d, elemento %d", i, vec[i]);
	}

	return EXIT_SUCCESS;
}
