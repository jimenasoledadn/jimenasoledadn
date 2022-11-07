/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
					un rango determinado.
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumero(float numero);
float numFlotante(void);

int main(void) {
	setbuf(stdout, NULL);
	float numero;

	numero = numFlotante();
	mostrarNumero(numero);

	//numFlotante(numero); // NO ENTIENDO PORQE ME DICE 'numero' is used uninitialized in this function ???

	return EXIT_SUCCESS;

}

float numFlotante(void)
{
	float numero;
	printf("\nIngrese un numero flotante: ");
	scanf("%f", &numero);
	return numero;
}

void mostrarNumero(float numero)
{
	if(numero > 0 && numero < 101)
	{
		printf("El numero ingresado es el: %.2f", numero);
	}else{
		printf("Debe ingresar un numero entre el 1 y el 100");
	}

}


/*void numFlotante(float numero)
{
	printf("\nIngrese un numero flotante: ");
	scanf("%f", &numero);
	if(numero > 0 && numero < 101)
		{
			printf("%.2f", numero);
		}else{
			printf("Debe ingresar un numero entre el 1 y el 100");
		}
}
*/
/*
	int main(void) {
	setbuf(stdout, NULL);

	float numeroResp;

	numeroResp = numFlotante();
	printf("El numero flotante ingresado es el: %.2f", numeroResp);

	return EXIT_SUCCESS;
}

float numFlotante(void)
{
	float numero;
	printf("Ingrese un numero flotante: ");
	scanf("%f", &numero);
	return numero;
}
*/
