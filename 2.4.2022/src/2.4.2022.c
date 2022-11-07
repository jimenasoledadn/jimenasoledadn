/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 2-4: Ingresar 8 números enteros, distintos de cero. Mostrar:
				a. El menor número ingresado.
				b. De los pares el mayor número ingresado.
				c. Producto de los negativos.
				d. En qué lugar fue ingresado el mayor numero
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	//a
	int menorNumero;
	int banderaMenorNum;
	banderaMenorNum = 0;
	//b
	int numeroParMayor;
	int banderaParMayor;
	banderaParMayor = 0;
	//c
	int productoNegativos = 1; //esta bien inicializarlo en 1??
	//d
	/*int mayorNumero;
	int banderaMayorNumero;
	banderaMayorNumero = 0; */

	for(int i=0 ; i<8 ; i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%d", &numero);
		if(menorNumero > numero || banderaMenorNum == 0)
		{
			menorNumero = numero;
			banderaMenorNum = 1;
		}
		if((numero%2 == 0) && (numeroParMayor < numero || banderaParMayor == 0))
		{
			numeroParMayor = numero;
			banderaParMayor = 1;
		}
		if(numero < 0)
		{
			productoNegativos = productoNegativos * numero;
		}
	}

	printf("El menor numero ingresado es el: %d\n", menorNumero);
	printf("El mayor numero par es el: %d\n", numeroParMayor);
	printf("El producto de los numeros negativos es: %d", productoNegativos);

	return EXIT_SUCCESS;
}
