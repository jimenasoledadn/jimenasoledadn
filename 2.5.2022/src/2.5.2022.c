/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-5:
Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
al regreso a la presencialidad. De cada persona debemos obtener los siguientes
datos:
n�mero de legajo (4 cifras sin ceros a la derecha),
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad (m�s de 17),
a�o de ingreso (validar por favor)
y g�nero ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por libreta universitaria es de $450.
Se debe informar (solo si corresponde):
a) La cantidad de personas mayores de 60 a�os.
b) El legajo y edad de la mujer que ingreso hace m�s tiempo.
c) Cuanto debe abonar la facultad por las libretas sin el descuento
d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan m�s de
10 libretas se hace 10%. Adem�s, por cada alumno mayor de 60 a�os al valor original
de la libreta se le hace un 25%. Informar los valores si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	return EXIT_SUCCESS;
}
