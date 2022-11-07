/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no.
 La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 */

#include <stdio.h>
#include <stdlib.h>

void numeroPar(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("ingrese un numero: ");
	scanf("%d", &numero);

	numeroPar(numero);

	return EXIT_SUCCESS;
}

void numeroPar(int numero)
{
	if(numero%2 == 0 )
	{
		printf("1- Es Par\n");
	}else{
		printf("0- No es Par\n");
		}
}


