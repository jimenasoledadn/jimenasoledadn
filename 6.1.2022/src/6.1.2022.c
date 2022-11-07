/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 6-1: Disponemos de dos variables numéricas (a y b). Realizar un algoritmo
				que permita el intercambio de valores de dichas variables.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int a;
	int b;
	int aux;

	a=5;
	b=9;
	printf("a: %d\nb: %d\n", a, b);

	aux = a;
	a = b;
	b = aux;

	printf("-----\n");
	printf("a: %d\nb: %d\naux: %d", a, b, aux);

	return EXIT_SUCCESS;
}
