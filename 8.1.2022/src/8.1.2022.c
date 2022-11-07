/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 8-1: De 20 productos se carga:
				- Código(alfanumérico 4 caracteres),
				- Modelo (máximo 10 char),
				- Cantidad,
				- Precio(float)
				Se pide que por medio de un menú de opciones se permita hacer lo siguiente
					A) Carga de productos
Ejercicio 8-2:
					B) Venta de productos
Ejercicio 8-3:
					C) Modificación del precio
Ejercicio 8-4:
					D) Modificar el modelo
Ejercicio 8-5:
					E) Listar ordenado por código
Ejercicio 8-6:
					F) Listar datos de los productos con menos de 3 unidades
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int main(void) {
	setbuf(stdout, NULL);

	char codigo[TAM][5]; // L AGREGO UNO MAS POR EL LUGAR DEL \O !!!
	char modelo[TAM][11];
	int cantidad[TAM];
	float precio[TAM];
	int opcion;
	char seguir;
	seguir = 's';

	do
	{
		printf("Menu\n");
		printf("A- Carga de productos\n");
		printf("B- Venta de productos\n");
		printf("C- Modificacion del Precio\n");
		printf("D- Modificar el Modelo\n");
		printf("E- Listar Ordenado por Codigo\n");
		printf("F- Listar datos de los productos con menos de 3 unidades\n");
		printf("G- Salir\n");
		fflush(stdin);
		scanf("%c", &opcion);


		switch(opcion)
		{
		case 'A':

			break;
		case 'B':
			break;
		case 'C':
			break;
		case 'D':
			break;
		case 'E':
			break;
		case 'F':
			break;
		case 'G':
			printf("Desea salir? s/n");
			fflush(stdin);
			scanf("%c", &seguir);
			break;
		}


	}while(seguir != 's');

	return EXIT_SUCCESS;
}


