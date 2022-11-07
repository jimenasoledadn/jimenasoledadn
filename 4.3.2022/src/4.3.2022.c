/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y
				Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
				ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
				funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
 */

#include <stdio.h>
#include <stdlib.h>
#include "carga.h"
#include "validacion.h"

int main(void) {
	setbuf(stdout, NULL);
	//int tempCelcius;
	//int tempFahrenheit;

	cargaCelcius(); //NO ENTIENDO EL WARNING
	//cargaFahrenheit(tempFahrenheit);


	return EXIT_SUCCESS;
}




