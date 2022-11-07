/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
				un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
				5! = 5*4*3*2*1 = 120
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);

int main(void) {
	setbuf(stdout, NULL);
	int numero;


	numero = pedirNumero();
	printf("%d\n", numero);

	for(int i=0; i<numero ; i++)
	{
		numero = numero * (numero-1);
		printf("%d\n", numero);
	}

	//printf("%d", numero);

	return EXIT_SUCCESS;
}

int pedirNumero(void)
{
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	return numero;
}
