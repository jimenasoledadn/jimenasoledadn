/*
 ============================================================================
 Name        : 2022.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
void realizarDescuento(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	numero = pedirNumero();

	realizarDescuento(numero);
	//mostrarNumero(resultado);

	return EXIT_SUCCESS;
}

int pedirNumero(void)
{
	int numero;
	printf("Ingrese el valor del producto: ");
	scanf("%d", &numero);
	return numero;
}

void realizarDescuento(int numero)
{
	float resultado;
	if(numero > 9 && numero < 101)
		{
			resultado = numero - (numero * 0.05);
			printf("El valor con el descuento es de: %.1f", resultado);
		}else{
			printf("Debe ingresar un numero entre 10 y 100");
		}
}



