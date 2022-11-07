/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 4-2: Realizar una función Suma que reciba como parámetros dos enteros (los que
				va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 0 si
				pudo realizar la suma y -1 en caso de no haberla podido realizar.
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1,int num2, int* suma);

int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numero1);

	printf("Ingrese otro numero: ");
	scanf("%d", &numero2);

	sumar(numero1, numero2, &resultado);
	printf("El resultado de la suma es: %d", resultado); //XQ SI RETORNA EL RESULTADO???--> retorna xq
														// el & adelante del nombre de la variable, indica que yo
                                                       // a mi funcion le estoy pasando la direccion de memoria de mi
													  // variable y NO el contenido de mi variable!!!
	return EXIT_SUCCESS;
}

int sumar(int num1,int num2, int* suma)
{
	int retorno = -1;
	*suma = num1 + num2;
	retorno = 0;

	return retorno;
}
