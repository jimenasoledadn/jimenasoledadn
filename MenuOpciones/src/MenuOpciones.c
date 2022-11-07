/*
 ============================================================================
 Name        : MenuOpciones.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int menu ();

void saludar()
{
    printf("Hola\n ");
}

void brindar()
{
    printf("Chin chin\n ");
}

void despedir ()
{
    printf("Chau, hasta la proxima\n ");
}

int menu()
{
    int opcion;

    system("cls");
    printf("Menu de Opciones:\n\n");
    printf("1. Saludar\n");
    printf("2. Brindar\n");
    printf("3. Despedir\n");
    printf("4. Salir\n");
    printf("\nIndique opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}


int main()
{
    setbuf(stdout, NULL);
	char seguir;
    int flagSaludar;
    int flagBrindar;

    seguir = 's';
    flagSaludar = 0;
    flagBrindar = 0;
    do
    {
        switch (menu())
        {
        case 1:
            saludar();
            flagSaludar = 1;
            break;
        case 2:
            if (flagSaludar == 1)
            {
                brindar();
                flagBrindar = 1;
            }
            else
            {
                printf("Para brindar, primero debemos saludarnos\n");
            }
            break;
        case 3:
            if (flagBrindar == 1)
            {
                despedir();
                flagBrindar = 0; //es una forma de resetear los valores, y asi volver a empezar
                flagSaludar = 0;
            }
            else
            {
                if(flagSaludar == 1)
                {
                    printf ("Para despedirnos primero debemos brindar\n");
                }
                else
                {
                    printf("Para despedirnos primero deberiamos saludarnos\n");
                }
            }
            break;
        case 4:
            seguir = 'n';
            break;
        default:
            printf("Opcion invalida\n");
        }
        fflush(stdin);
        system("pause"); //
    }while(seguir=='s');
}

