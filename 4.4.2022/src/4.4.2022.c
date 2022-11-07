/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicios 4-4:
	A. Hacer el menú de un programa en el MAIN con las siguientes opciones:
		1. Loguearse
		2. Comprar
		3. Ver mis compras
		4. Vender
		5. Salir
	B. Al menú anterior chequear que no pueda ingresar a ninguna opción si no se logueó.
	C. Ahora agregamos, chequear que no pueda ver sus compras, si no ingresó primero a
	comprar al menos una vez.
	D. Cuando se ingresa a la opción vender del menú, debe abrirse otro menú que contenga:
		1. Vender
		2. Hacer factura
		3. Volver atrás.
	E. A lo anterior sumarle que haya compras para poder vender. (Si compré una vez y vendí
	una vez no puedo ingresar a vender).
	F. Pasar las acciones de menú a funciones y llevarlas a una biblioteca
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	/* MENU HECHO EN EJERCICIO: MENU 01.09
	 *
	 * int opcion;
	int flagLoguear;
	int flagCompras;
	int flagVentas;
	flagLoguear = 0;
	flagCompras = 0;
	flagVentas = 0;

	printf("-------MENU-------\n");
	printf("Elija una opcion:\n");
	printf(" 1. Loguearse\n");
	printf(" 2. Comprar\n");
	printf(" 3. Ver mis compras\n");
	printf(" 4. Vender\n");
	printf(" 5. Salir\n");
	printf("------------------\n"); // VER QUE PONGO O SI LO BORRO!!!
	scanf("%d", &opcion);

	switch(opcion)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
	}


*/
	return EXIT_SUCCESS;
}
