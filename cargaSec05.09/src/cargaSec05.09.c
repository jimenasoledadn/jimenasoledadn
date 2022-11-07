/*
 ============================================================================
 Name        : 09.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

Ejercicio:
	De los 10 empleados de una fábrica se registra:
		-número de legajo (coincidente con el índice)
		-edad
		-sueldo
	Se pide ingresar los datos consecutivamente y
	calcular el sueldo promedio. (Clase5-Ej1.c)
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT 3

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int edad[CANT];
	float sueldo[CANT];

	float promedioSueldos;
	int contadorSueldo;
	int acumuladorSueldo;
	contadorSueldo = 0;
	acumuladorSueldo = 0;

	for(i=0 ; i<CANT ; i++)
	{
		printf("Edad del empleado %d: ", i);
		scanf("%d", &edad[i]); // CON EL & !!!
		printf("Ingrese sueldo del empleado: ");
		scanf("%f", &sueldo[i]);

		contadorSueldo++;
		acumuladorSueldo += sueldo[i];
		//printf("Legajo numero: %d, edad: %d, sueldo: %f\n", empleados[i], edad[i], sueldo[i]); ESTO LO HAGO EN OTRO FOR!!!!
	}

	for(i=0; i<5 ; i++)
	{
		 printf("\nNumero de legajo: %d, su edad %d, y el sueldo es: %.2f", i, edad[i], sueldo[i]);
	}

	promedioSueldos = (float) acumuladorSueldo / contadorSueldo;
	printf("\nEl promedio de los sueldos es: %2.f", promedioSueldos);

	return EXIT_SUCCESS;
}


/*
 * int i;
 * int numero;
 * int listaNotas[5];
 *
 * //CARGA SECUENCIAL
	 * for(i=0; i<5 ; i++)
	 * {
	 * 	 printf("\nIngrese una nota para la posicion %d, ", i);
	 * 	 scanf("%d", &numero);
	 * 	 listaNotas[i] = numero;
	 *
	 * 	 // O sino directamente guardarlo en el array de lista notas, y NO necesitar la variable numero:
	 *    printf("\nIngrese una nota para la posicion %d, ", i);
	 * 	  scanf("%d", &listaNotas[]);
	 * }
 * //MOSTRAR LOS DATOS del array cargado
	 * 	for(i=0; i<5 ; i++)
	 * 	{
	 * 		printf("\nLa nota para la posicion %d es: %d", i, listaNotas[i]);
	 * 	}
 *
 */
