/*
 * restas.c
 *
 *  Created on: 1 sep. 2022
 *      Author: jimes
 */

#include <stdio.h>
#include <stdlib.h>

int restar1(int num1, int num2) //desarrollo
{
	int total;
	total = num1 - num2;
	return total;
}

int restar2(void)
{
	int numero1;
	int numero2;
	int resta;

	printf("Ingrese un numero: ");
	scanf("%d", &numero1);
	printf("Ingrese un numero: ");
	scanf("%d", &numero2);

	resta = restar1(numero1, numero2);

	return resta;
}

void restar3(int num1, int num2)
{
	int resultado;
	resultado = num1 - num2;
	printf("El resultado de la resta es %d", resultado);
	// NO RETORNA NADA, ASI QUE ACA MISMO EN LA FUNCION MUESTRO EL RESULTADO!!!
}

void restar4() //NO RETORNA NI PIDE NADA LA FUNCION, ENTONCES HAY QUE HACER TODO DENTRO DE ESTA MISMA
{
	int num1;
	int num2;
	int resta4;

	printf("Ingrese un numero: ");
	scanf("%d", &num1);

	printf("Ingrese otro numero: ");
	scanf("%d", &num2);

	resta4 = num1 - num2;

	printf("La resta 4 es: %d", resta4);
}


