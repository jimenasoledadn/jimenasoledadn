/*
 * MenuDesafio.c
 *
 *  Created on: 1 sep. 2022
 *      Author: jimes
 */

#include <stdio.h>
#include <stdlib.h>

int menuDesafio(void)
{
	int opcion;

	printf("\nElige una opcion; \n");
	printf("1) Iniciar\n");
	printf("2) Procesar\n");
	printf("3) Finalizar\n");
	printf("4) Salir\n");
	scanf("%d", &opcion);

	return opcion;
}

