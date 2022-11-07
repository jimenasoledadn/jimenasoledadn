/*
 * siOno.c
 *
 *  Created on: 19 oct. 2022
 *      Author: jimes
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Funcion usada para verificar el ingreso de caracteres.Chequea para que
	solo sean admitidas las letras S o N.
	Se ingresa void y devuelve un entero sin signo
	0 si se ingreso la N
	1 si se ingreso la S
	*/
unsigned int verifica(void)
{
	char letra;
	printf("\nIngrese opcion...S/N?");
	letra=toupper(getchar()); //letra=toupper(getche());  --> ASI ESTA EN EL EJEMPLO, XQ ME PIDE QUE LO CAMBIE???

	while(!((letra=='S')||(letra=='N')))
		{
		printf("\nHa ingresado opci¢n no valida...Reintente el ingreso(S/N)... "); // XQ me aparece 2 veces ???
		letra=toupper(getchar());
		}
	return (letra=='S');
}
