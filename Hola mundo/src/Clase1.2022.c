
/*
 ============================================================================
 Name        : Hola.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout, NULL);

	int valorA;
	int valorB;
	int resultado;

	printf ("Ingrese un numero: ");
	scanf ("%d", &valorA);

	printf ("Ingrese otro numero: ");
	scanf ("%d", &valorB);

	resultado = valorA + valorB;

	printf ("El resultado de la suma es: %d", resultado);

	return EXIT_SUCCESS;
}
