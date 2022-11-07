/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
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
#include "restas.h"

int main(void) {
	setbuf(stdout, NULL);


	/*
	 * Restar1
	int resultado;
	int numero1;
	int numero2;
	int totalUno;

	printf("Ingrese un numero: ");
	scanf("%d", &numero1);
	printf("Ingrese un numero: ");
	scanf("%d", &numero2);

	totalUno = restar1(numero1, numero2);
	printf("El resultado de la resta es: %d", totalUno); */

	/*
	 * RESTAR2
	 resultado = restar2();
	printf("El resultado de la resta2 es: %d", resultado); */

	/*
	 * Restar 3
	int numero1;
	int numero2;

	printf("Ingrese un numero: ");
	scanf("%d", &numero1);
	printf("Ingrese un numero: ");
	scanf("%d", &numero2);

	restar3(numero1, numero2); // NO lo guardo en ninguna variable */

	//restar 4
	restar4();

	return EXIT_SUCCESS;
}

