/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 */

#include <stdio.h>
#include <stdlib.h>

float numFlotante(void);

int main(void) {
	setbuf(stdout, NULL);

	float numeroResp;

	numeroResp = numFlotante();
	printf("El numero flotante ingresado es el: %.2f", numeroResp);

	return EXIT_SUCCESS;
}

float numFlotante(void)
{
	float numero;
	printf("Ingrese un numero flotante: ");
	scanf("%f", &numero);
	return numero;
}


/*int main(void) {
	setbuf(stdout, NULL);
	float numero;

	numFlotante(numero);

	return EXIT_SUCCESS;
}

void numFlotante(float numero)
{
	printf("Ingrese un numero flotante: ");
	scanf("%f", &numero);
	printf("%.2f", numero);
}*/
