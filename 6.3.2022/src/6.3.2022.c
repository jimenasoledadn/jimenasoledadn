/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 6-3: Realizar un programa que permita el ingreso de datos de 15 empleados
				legajo (coincidente con el �ndice), edad, salario, sexo (1-Femenino, 2-Masculino, 3-No
				binario). Realizar carga secuencial. Calcular el sueldo promedio. Listar a los
				empleados no binarios.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int cantSueldos = 0;
	float acumSueldos = 0;
	float promedioSueldos;

	int contNoBinario = 0;

	int edades[TAM];
	float salarios[TAM];
	int sexo[TAM];
	// Carga Secuencial
	for(i=0 ; i<TAM ; i++)
	{
		printf("Ingrese edad: ");
		scanf("%d", &edades[i]);
		printf("Ingrese salario: ");
		scanf("%f", &salarios[i]);
		cantSueldos++;
		acumSueldos += salarios[i];
		printf("Ingrese el sexo: ");
		printf("\n 1-Femenino\n");
		printf(" 2-Masculino\n");
		printf(" 3-No Binario\n");
		fflush(stdin);
		scanf("%d", &sexo[i]);
	}

	for(i=0;i<TAM;i++)
	{

		printf("Legajo: %d \nEdad: %d \nSalario: %f \nSexo: %c\n", i, edades[i], salarios[i], sexo[i]);
	}

	//Promedio de salirios
		promedioSueldos = acumSueldos / cantSueldos;
		printf("El promedio de los salarios es: %f\n", promedioSueldos);

	//Cant de NO Binarios
		for(i=0;i<TAM;i++)
		{
			if(sexo[i] == 3)
			{
				contNoBinario++;
			}
		}
		printf("Cantidad de Emplead@s No Binarios: %d", contNoBinario);

	return EXIT_SUCCESS;
}
