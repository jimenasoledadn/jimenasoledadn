/*
 * validacion.c
 *
 *  Created on: 4 oct. 2022
 *      Author: jimes
 */

#include <stdio.h>
#include <stdlib.h>

int validarCelsius(int temperatura)
{
	int retorno = -1;
	if(temperatura >= 0 && temperatura<101 )
	{
		retorno = 0;
	}
	return retorno;
}

int validarFahrenheit(int temperatura)
{
	int retorno = -1;
	if(temperatura >= 32 && temperatura < 213 )
	{
		retorno = 0;
	}
	return retorno;
}

