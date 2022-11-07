/*
 ============================================================================
 Name        : 09.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio:
	De los 100 empleados se registra número de legajo (coincidente
	con el índice), edad y salario. (Clase5-Ej3.c)
		-Ingresar los datos
		-Calcular el sueldo promedio.
	El análisis del problema se plantea exactamente igual al caso de
	carga secuencial. La única diferencia es que ahora se debe ingresar
	el legajo quien va a ser el que me indique la posición en donde se
	va a cargar el sueldo y la edad.
	   Recordar:la relación entre el índice y el legajo es legajo=indice + 1.
 */
// 1 --> HACER FUNCION DE CARGA ALEATORIA DE ARRAYS
// 2 --> HACER FUNCION DE MOSTRAR DATOS DE ARRAYS
#include <stdio.h>
#include <stdlib.h>

#define TAM 2

int inicializarArrays(int arrayEdades[], int cantElementos);
int cargaAleatoriaArrays(int legajo, int arrayEdad[], float arraySalario[], int tam);

int main(void) {
	setbuf(stdout, NULL);
	int i;
	int listaEdad[TAM];
	float listaSalario[TAM];
	int legajo;
	//int edad;
	//float salario;
	char respuesta = 's';

	if(inicializarArrays(listaEdad, TAM) == 0 && inicializarArrays(listaSalario, TAM) == 0)
	{
		do
		{
			//CARGA ALEATORIA
			printf("Que legajo queres completar? ");
			scanf("%d", &legajo);

			cargaAleatoriaArrays(legajo, listaEdad, listaSalario, TAM);

			/*printf("Ingrese la edad: ");
			scanf("%d", &listaEdad[legajo]); //ACA me esta diciendo que va a guardar la edad, en el numero de legajo que indico el usuario!!!
									// tmbien podria ser asi --> scanf("%d", &edad); --> por ello se crea la variable "edad"
								   //   seguiria asi: -->        listaEdad[legajo] = edad;
			printf("Ingrese el salario: ");
			scanf("%2.f", &listaSalario[legajo]); // ACA se puede hacer lo mismo que para edad!!!! */

			printf("Desea seguir ingresando legajos? s/n");
			fflush(stdin);
			scanf("%c", &respuesta);
		}while(respuesta == 's');
	}




	//MOSTRAR los datos del array, SOLO de los que ESTAN CARGADOS!!!
	for(legajo=0; legajo<TAM ; legajo++) // ACA lo tengo que cargar con 'i' o con la variable en donde lo cargue
	{
		if(listaEdad[legajo] != 0)
		{
			printf("El legajo numero: %d, de edad %d, tiene un sueldo de %f", legajo, listaEdad[legajo], listaSalario[legajo]);
		}
	}

	return EXIT_SUCCESS;
}

int inicializarArrays(int arrayEdades[], int cantElementos)
{
	int retorno = -1;
	int i;

	if(arrayEdades != NULL && cantElementos > 0)
	{
		//TENGO QUE INICIALIZAR todos los ARRAYS para que los que queden sin cargar no se carguen con BASURA!!!
		for(i=0 ; i<cantElementos ; i++)
		{
			arrayEdades[i] = 0;
		}
		retorno = 0;
	}
	return retorno;
}

int inicializarArrays(int arrayEdades[], int cantElementos);

// QUE HACE?
// QUE RECIBE?
// QUE RETORNA?
int cargaAleatoriaArrays(int legajo, int arrayEdad[], float arraySalario[], int tam)
{
	int retorno = -1;
	if(arrayEdad != NULL && arraySalario != NULL && tam > 0)
	{
		printf("Ingrese la edad: ");
		scanf("%d", &arrayEdad[legajo]); //ACA me esta diciendo que va a guardar la edad, en el numero de legajo que indico el usuario!!!
								// tmbien podria ser asi --> scanf("%d", &edad); --> por ello se crea la variable "edad"
							   //   seguiria asi: -->        listaEdad[legajo] = edad;
		printf("Ingrese el salario: ");
		scanf("%f", &arraySalario[legajo]); // ACA se puede hacer lo mismo que para edad!!!!
		retorno = 0;
	}
	return retorno;
}
