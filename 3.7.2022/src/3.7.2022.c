/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
	los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
	variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
	realice la operaci�n de dichos valores a trav�s de una funci�n. Mostrar el resultado
	por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero();
void validarNumero(int numero);
int sumar(int numero1, int numero2);
int restar(int numero1, int numero2);

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	char operacion;
	int respSuma;
	int respResta;
	char continuar;


	numero1 = pedirNumero();
	validarNumero(numero1);
	numero2 = pedirNumero();
	validarNumero(numero2);

	do
	{
		printf("Ingrese la operacion que desea realiar: (s-sumar, r-restar) ");
		fflush(stdin);
		scanf("%c", &operacion);

		switch(operacion)
		{
			case 's':
				respSuma = sumar(numero1, numero2);
				printf("El resultado de la suma es: %d", respSuma);
				break;
			case 'r':
				respResta = restar(numero1, numero2);
				printf("El resultado de la resta es: %d", respResta);
				break;
			default:
				printf("Desea continuar? Ingrese c ");
		}
	}while(continuar == 'c');




	return EXIT_SUCCESS;
}

int pedirNumero()
{
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	return numero;
}

void validarNumero(int numero)
{
	if(!(numero>10 && numero<100))
	{
		printf("Ingrese un numero valido entre 10 y 100 ");
	}
}

int sumar(int numero1, int numero2)
{
	int suma;
	suma = numero1 + numero2;
	return suma;
}

int restar(int numero1, int numero2)
{
	int resta;
	resta = numero1 - numero2;
	return resta;
}
