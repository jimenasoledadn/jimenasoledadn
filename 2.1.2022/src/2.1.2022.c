/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
					promedio de los números. Probar la aplicación con distintos valores.
					Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
					Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int suma;
	int contador;
	float promedio;
	suma = 0;
	contador = 0;

	for(int i=0 ; i<7 ; i++)
	{
		printf("Ingrese un numero negativo: ");
		scanf("%d", &numero);
		if(numero<0)
		{
			contador++;
			suma += numero;
		}else
			{
				printf("Debe ingresar un numero menor a CERO. \n");
			}
	}

	promedio = (float) suma / contador;
	printf("La suma de los numeros es: %d\n", suma);
	printf("El promedio de los numeros es: %.2f", promedio);

	return EXIT_SUCCESS;
}
