/*
 ============================================================================
 Name        : 09.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Desafío Menú:

		Realizar un Menú que muestre las opciones:
				a-Iniciar
				b-Procesar
				c-Finalizar
				d-Salir
		Nota:
		-Antes de salir preguntar si "esta seguro que desea salir?s/n"
		-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
		-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
		-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar

 */

#include <stdio.h>
#include <stdlib.h>
#include "MenuDesafio.h"

int main(void) {
	setbuf(stdout, NULL);

	int banderaA;
	int banderaB;
	char respuesta;

	banderaA = 0;
	banderaB = 0;
	respuesta = 's';

	do
	{
		system("CLS");
		switch(menuDesafio())
		{
			case 1:
				printf("\nUsted a Iniciado el programa.");
				banderaA = 1;
				break;
			case 2:
				if(banderaA == 1)
				{
					printf("\nUsted a Procesado el programa.");
					banderaB = 1;
				}else
					{
						printf("\nUsted debe primero Iniciar el programa.");
					}
				break;
			case 3:
				if(banderaA == 1 && banderaB == 1)
				{
					printf("\nUsted a Finalizado el programa.");
					banderaA = 0; // Esto es para que vuelva a inializar las banderas y pueda
					banderaB = 0;  // pedir nuevamente las opciones!!!
				}else
					{
						if(banderaA == 1 && banderaB == 0)
						{
							printf("\nUsted debe Procesar el programa antes de Finalizarlo.");
						}else{
								printf("\nUsted debe Iniciar y luego Procesar el programa.");
							 }
					}
				break;
			case 4:
				//respuesta = 'n';

				printf("\nUsted desea Salir s/n?\n");
				fflush(stdin);
				scanf("%c", &respuesta);

				break;
			default:
				printf("\nIngrese una opcion valida.\n");
		}
		fflush(stdin);
		//system("pause");  para que me pida que indique una tecla para continuar
	}while(respuesta != 's'); //quiero salir por ello debe ser diferente de S

	return EXIT_SUCCESS;
}
