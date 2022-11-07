/*
 * pedirNum.c
 *
 *  Created on: 23 oct. 2022
 *      Author: jimes
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getPedirNumero(int* pResultado, char* mensajeError, int reintentos)
{
	int retorno = -1;
	//int bufferInt; //para guardar lo que el usuario ingrese y compararlo

	do
	{
		if(pResultado != NULL && mensajeError != NULL && reintentos >=0 )
		{
			scanf("%d", &pResultado);
			retorno = 0;
			break; //PARA que corte las iteraciones si conseguimos el numero
		}else
			{
				printf("%s", mensajeError);
				reintentos--;
			}

	}while(reintentos >= 0);

	return retorno;
}


