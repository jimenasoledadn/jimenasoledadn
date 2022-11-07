/*
 ============================================================================
 Name        : Pruebas.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int imprimirMundo();

int main(void) {
	setbuf(stdout, NULL);

	int retorno;
	retorno = imprimirMundo();
	if(retorno == 0)
	{
		printf("\n%d", retorno);
		printf("\nLa funcion anduvo bien!");
	}

	//
	imprimirMundo(); // lo imprime aunque sea void o int SIN TENER QE ASIGNARSELO A UNA VARIABLE

	return EXIT_SUCCESS;
}

int imprimirMundo()
{
	printf("\nHola mundo");
	return 0;
}
