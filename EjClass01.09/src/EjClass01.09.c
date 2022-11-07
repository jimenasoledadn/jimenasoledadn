/*
 ============================================================================
 Name        : 09.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejemplo en clase del dia 01 de sept
 pasaje de numero por valor, y pasaje de valor por referencia!
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * PASAJE DE NUMERO POR VALOR
void mostrarNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	mostrarNumero(numero);

	return EXIT_SUCCESS;
}

void mostrarNumero(int numero)
{
	printf("El numero ingresado fue: %d", numero);
	numero = 10;
} */

// PASAJE DE VALOR POR REFERENCIA:

void mostrarNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	mostrarNumero(numero); // &numero

	printf("\nEl valor del numero es: %d", numero);

	return EXIT_SUCCESS;
}

void mostrarNumero(int num)
{
	printf("El numero ingresado fue: %d", num);
	num = 10;
}
