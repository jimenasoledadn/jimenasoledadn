/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-1: Crear una funci�n que muestre por pantalla el n�mero entero que
					recibe como par�metro.
 */

#include <stdio.h>
#include <stdlib.h>
void mostrarNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int num;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	mostrarNumero(num);

	return EXIT_SUCCESS;
}

void mostrarNumero(int numero)
{
	printf("El numero ingresado es el: %d", numero);
}
