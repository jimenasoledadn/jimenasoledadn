/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-6:
Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	char caracter;
	int contador;
	contador = 0;

	for(int i=0 ; i<5 ; i++)
	{
		printf("Ingrese un caracter: \n");
		fflush(stdin);
		scanf("%c", &caracter);
		if(caracter == 'm')
		{
			contador++;
		}
	}

	printf("La cantidad de letras minuscula m: %d", contador);

	return EXIT_SUCCESS;
}
