/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
				Solicitar un número al usuario e informar si el número es par o impar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("Ingresar un numero: \n");
	scanf("%d", &numero);

	if(numero%2 == 0 )
	{
		printf("El numero ingresado es PAR.\n");
	}else{
		printf("El numero ingresado NO es PAR.\n");
		}
	return EXIT_SUCCESS;
}
