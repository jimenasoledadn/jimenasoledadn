/*
 ============================================================================
 Name        : 1-MisCosasP1.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"
#include "siOno.h"

unsigned int verifica(void);

int main(void) {
	setbuf(stdout, NULL);
	int edad;
	int respuesta;
	float promedio;
	char letra;

	verifica();

	respuesta = utn_getNumero(&edad, "Edad?\n", "Error la edad debe ser desde 0 a 100\n", 0, 100, 2);
	if(respuesta == 0)
	{
		printf("La edad es: %d\n", edad);
	}else
	{
		printf("ERROR\n");
	}

	respuesta = utn_getFloat(&promedio, "Promedio?\n", "Error el promedio debe estar entre 0 y 10\n", 0, 10, 2);
	if(respuesta == 0)
	{
		printf("El promedio es: %f\n", promedio);
	}else
	{
		printf("ERROR\n");
	}

	respuesta = utn_getCaracter(&letra, "Letra?\n", "Error la letra debe ser de la A a la J\n", 'A', 'J', 2);
	if(respuesta == 0)
	{
		printf("\nLa letra es: %c", letra);
	}else
	{
		printf("ERROR");
	}

	/*char respuesta;

	respuesta = verifica();
	printf("%c", respuesta);*/

	return EXIT_SUCCESS;
}


