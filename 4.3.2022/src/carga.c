/*
 * carga.c
 *
 *  Created on: 4 oct. 2022
 *      Author: jimes
 */
#include <stdio.h>
#include <stdlib.h>
#include "validacion.h"

void cargaCelcius(void)
{
	int numero;
	printf("Ingrese la temperatura en Celcius: ");
	scanf("%d", &numero);
	if(validarCelsius(numero) == 0)
	{
		printf("La temperatura en Celcius es de %d\n", numero);
	}else
		{
			printf("Ingrese un numero valido entre 0 y 101\n");
		}
}

void cargaFahrenheit(void)
{
	int numero;
	printf("Ingrese la temperatura en Fahrenheit: ");
	scanf("%d", &numero);
	if(validarFahrenheit(numero) == 0)
	{
		printf("La temperatura en Fahrenheit es de %d", numero);
	}else
		{
			printf("Ingrese un numero valido entre 32 y 212");
		}
}

