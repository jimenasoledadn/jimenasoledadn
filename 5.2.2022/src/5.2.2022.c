/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-2: Hacer una función que calcule el promedio de los valores del Array que
				recibe y me devuelva el promedio.
 */
int pedirNumeroEntero(int* numero, char* mensajeError, int reintentos );
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);
	int numeros[TAM];
	int resultado;

	resultado = pedirNumeroEntero(numeros, "ERROR", 2);
	if(resultado == 0)
	{
		printf("El valor es %d", *numeros);
	}else{
		printf("Incorrecto!");
	}
	/*for(int i=0;i<TAM;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
	}*/

	return EXIT_SUCCESS;
}

int pedirNumeroEntero(int* numero, char* mensajeError, int reintentos )
{
	int retorno = -1;
	if(numero != NULL && mensajeError != NULL && reintentos >= 0)
	{
		printf("Ingrese un numero: ");
		scanf("%d", numero);
		retorno = 0;
	}else{
		reintentos--;
		printf("%s", mensajeError);
	}
	return retorno;
}

/*int calcularPromedio(int arrayNumeros[], int tam, int *promedio)
{

}*/
