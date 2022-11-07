/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
					caso de que no exista también informarlo.
			Ejemplo:
			1 5 3 el 3 es del medio
			5 1 5 no hay número del medio
			3 5 1 el 3 es del medio
			3 1 5 el 3 es del medio
			5 3 1 el 3 es del medio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

		int numUno;
		int numDos;
		int numTres;

		printf("Ingrese un numero: ");
		scanf ("%d", &numUno);

		printf("Ingrese otro numero: ");
		scanf ("%d", &numDos);

		printf("Ingrese Otro numero: ");
		scanf ("%d", &numTres);


		if((numDos < numTres && numTres < numUno) || (numDos > numTres && numTres > numUno ))
		{
			printf("El numero %d es el del medio", numTres);
		}else{
			if((numUno < numDos && numDos < numTres) || (numUno > numDos && numDos > numTres) )
			{
				printf("El numero %d es el del medio", numDos);
			}else{
				if( (numTres < numUno && numUno < numDos ) || (numTres > numUno && numUno > numDos) )
				{
					printf("El numero %d es el del medio", numUno);
				}
				else{
						printf("No hay numero del medio");
					}
			}
		}



	return EXIT_SUCCESS;
}
