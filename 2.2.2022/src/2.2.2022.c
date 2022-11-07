/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
				a) El promedio de los positivos y su mínimo.
				b) El promedio de los negativos y su máximo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int sumaPositivos;
	int contPositivos;
	float promedioPos;
	int minimoPositivos;
	int banderaPositivos;
	sumaPositivos = 0;
	contPositivos = 0;
	banderaPositivos = 0;

	int sumaNegativos;
	int contNegativos;
	float promedioNegativos;
	int maximoNegativos;
	int banderaNegativos;
	sumaNegativos = 0;
	contNegativos = 0;
	banderaNegativos = 0;
	char seguir;
	seguir = 's';

	while(seguir == 's')
	{
		printf("Desea ingresar un numero: s/n \n");
		fflush(stdin);
		scanf("%c", &seguir);

		if(seguir == 's')
		{

			printf("Ingrese un numero: \n");
			scanf("%d", &numero);

			if(numero > 0)
			{
				sumaPositivos = sumaPositivos + numero;
				contPositivos ++;
				if(minimoPositivos > numero  || banderaPositivos == 0)
				{
					minimoPositivos = numero;
					banderaPositivos = 1;
				}
			}else{
				sumaNegativos += numero;
				contNegativos ++;
				if(maximoNegativos < numero  || banderaNegativos == 0)
					{
						maximoNegativos = numero;
						banderaNegativos = 1;
					}
				}
		}
	}

	promedioPos = (float) sumaPositivos / contPositivos;
	promedioNegativos = (float) sumaNegativos / contNegativos;

	printf("%d\n", contPositivos);
	printf("%d\n", contNegativos);
	printf("La suma de los positivos es: %d\n", sumaPositivos);
	printf("El promedio de los positivos es: %.2f\n", promedioPos);
	printf("El minimo numero de los positivos es el %d\n", minimoPositivos);

	printf("La suma de los negativos es: %d\n", sumaNegativos);
	printf("El promedio de los negativos es: %.2f\n", promedioNegativos);
	printf("El maximo numero de los negativos es el %d\n", maximoNegativos);
	return EXIT_SUCCESS;
}
