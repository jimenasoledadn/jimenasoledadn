/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
		Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de
		 los números es el segundo: 9
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numUno;
	int numDos;
	int numTres;

	printf("Ingrese un numero: ");
	scanf ("%d", &numUno);

	printf("Ingrese un numero: ");
	scanf ("%d", &numDos);

	printf("Ingrese un numero: ");
	scanf ("%d", &numTres);

	if(numUno > numDos && numUno > numTres)
	{
		printf("El mayor de los numeros es el primero: %d", numUno);
	}else{
		if(numDos > numUno && numDos > numTres)
		{
			printf("El mayor de los numeros es el segundo: %d", numDos);
		}else{
			if(numTres > numUno && numTres > numDos)
			{
				printf("El mayor de los numeros es el tercero: %d", numTres);
			}
		}
	}
}
