/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Ejercicio 1-1:
 *  Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
	resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
	da como resultado 5”
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf (stdout, NULL);

	int numA;
	int numB;

	int suma;

	do
	{
		printf("Ingrese un numero: ");
		scanf ("%d", &numA);
	}while(numA < -50 || numA > 100 );


	do
	{
		printf("Ingrese otro numero: ");
		scanf ("%d", &numB);
	}while(numB < -50 || numB > 100 );

	suma = numA + numB;

	printf("La suma entre %d y %d es: %d", numA, numB, suma);


	return EXIT_SUCCESS;
}
