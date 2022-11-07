/*
 * utn.c
 *
 *  Created on: 18 oct. 2022
 *      Author: jimes
 */

#include <stdio.h>
#include <stdlib.h>

// Para pedir cualquier tipo de numero:
//COMO HAGO PARA QUE NO SE CUELGUE SI POR EJEMPLO ESCRIBO "HOLA" EN VEZ DE UN NUMERO!!!
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt; //para guardar lo que el usuario ingrese y compararlo

	do
	{
		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0 )
		{
			printf("%s", mensaje);
			scanf("%d", &bufferInt);
			if(bufferInt>=minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt; // Si sale bien!
				retorno = 0;
				break; //PARA que corte las iteraciones si conseguimos el numero
			}else
			{
				printf("%s", mensajeError);
				reintentos--;
			}

		}
	}while(reintentos >= 0);

	return retorno;
}

int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat; //para guardar lo que el usuario ingrese y compararlo

	do
	{
		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0 )
		{
			printf("%s", mensaje);
			scanf("%f", &bufferFloat);
			if(bufferFloat>=minimo && bufferFloat <= maximo)
			{
				*pResultado = bufferFloat; // Si sale bien!
				retorno = 0;
				break; //PARA que corte las iteraciones si conseguimos el numero
			}else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}
	}while(reintentos >= 0);

	return retorno;
}

int utn_getCaracter(char* pResultado,char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar; //para guardar lo que el usuario ingrese y compararlo

	do
	{
		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0 )
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);
			if(bufferChar>=minimo && bufferChar <= maximo)
			{
				*pResultado = bufferChar; // Si sale bien!
				retorno = 0;
				break; //PARA que corte las iteraciones si conseguimos el numero
			}else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}
	}while(reintentos >= 0);

	return retorno;
}
