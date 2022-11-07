/*
 ============================================================================
 Name        : tp_laboratorio_2.c
 Author      : Jimena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 3
#define VACIO 1 // pasar a biblioteca
#define OCUPADO 0 // pasar!


struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}typedef Employee;

int menu();
int initEmployees(Employee* list, int len);
int addEmployee(Employee* list, int len, int* pId);
int findEmployeeById(Employee* list, int len,int id);
void mostrarPersona(Employee p);
int removeEmployee(Employee* list, int len);

int main(void)
{
	setbuf(stdout,NULL);
	char seguir = 's';
	Employee list[LEN];
	int nextId = 0;

    if(!initEmployees(list, LEN))
    {
        printf("Problema al inicializar!\n");
    }

	 do
	    {
	        switch(menu())
	        {
				case 1:
					if(!addEmployee(list, LEN, &nextId))
					{
						printf("No se pudo realizar el alta!\n");
					}
					else{
						printf("Alta exitosa.\n");
					}
					break;

				case 2:
					printf("Modificar Persona\n");
					break;
				case 3:
		            if(!removeEmployee(list, LEN))
		            {
		                printf("No se pudo realizar la baja!\n");
		            }
		            else{
		                printf("Baja Exitosa!\n");
		            }
					break;
				case 4:
					printf(mostrarPersonas(list, LEN));
					break;
				case 5:
					printf("Salir\n");
					break;
				default:
					printf("Opcion Invalida!!!\n");
	        }
	        printf("\n");
	        system("pause"); // es el que te pone: presiona una tecla para continuar

	    }while(seguir == 's');


	return EXIT_SUCCESS;
}

int menu()
{
    int opcion;
    system("cls");
    printf("   *** Empleados ***\n\n");
    printf("1- Alta Persona\n");
    printf("2- Modificar Persona\n");
    printf("3- Baja Persona\n");
    printf("4- Informar\n");
    printf("6- Salir\n");
    printf("Ingrese Opcion: ");
    scanf("%d", &opcion);

    return opcion;
}



int initEmployees(Employee* list, int len)
{
    int todoOk = 0;

    if(list!=NULL && len >0)
    {
        for(int i=0; i<len ; i++)
        {
            list[i].isEmpty = VACIO; //llevar al define a la biblioteca!!!!
        }
        todoOk = 1;
    }

    return todoOk;
}


void mostrarPersona(Employee p)
{
    printf(" %4d    %-10s   %-10s     %5.2f    %d\n",
                                            p.id,
                                            p.name,
                                            p.lastName,
                                            p.salary,
                                            p.sector
                                            );
}



int addEmployee(Employee* list, int len, int* pId)
{
    int todoOk = -1;
    Employee auxPersona;

    if(list!=NULL && len>0)
    {
        if(findEmployeeById(list, len, id))

    	printf("    ***  Alta Persona  *** \n");



            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(auxPersona.name);

            printf("Ingrese apellido: ");
            fflush(stdin);
            gets(auxPersona.lastName);

            printf("Ingrese salario: ");
            fflush(stdin);
            scanf("%f", &auxPersona.salary);

            printf("Ingrese sector: ");
            scanf("%d", &auxPersona.sector);

            auxPersona.isEmpty = 0;

            todoOk = 1;
    }

    return todoOk;
}


int findEmployeeById(Employee* list, int len, int id)
{
	int indice = -1;

	if(list!=NULL && len>0)
	{
		for(int i=0 ; i<len ; i++)
		{
			if(!list[i].isEmpty && list[i].id == id)
			{
				indice = i;
				break;
			}
		}
	}
	else{
		indice = -2;
	}

	return indice;
}


int removeEmployee(Employee* list, int len)
{
	int todoOk = 0;
	int indice;
	int id;
	char confirma;

	if(list!=NULL && len>0)
	{
		printf("    *** Baja Persona *** \n\n");
		printf("Ingrese id: ");
		scanf("%d", &id);

		indice = findEmployeeById(list, len, id);

		if(indice == -1)
		{
			printf("El id: %d no esta registrado en el sistema.\n", indice);
		}
		else{
			mostrarPersona(list[indice]);
			printf("Confirma Baja?: ");
			fflush(stdin);
			scanf("%c", &confirma);
			if(confirma == 's')
			{
				list[indice].isEmpty = 1;
				todoOk = 1;
			}
			else{
				printf("Baja cancelada por el usuario.\n");
			}
		}
	}


	return todoOk;
}

int mostrarPersonas(Employee list[], int len)
{
    int todoOk = 0;
    int flag = 1; // bandera para que al final del for


    if(list!=NULL && len>0)
    {
        printf("         **** Lista de Personas **** \n");
        printf("---------------------------------------------\n");
        printf("   Id    Nombre      Sexo   Edad   Altura\n");
        printf("---------------------------------------------\n");

        for(int i=0; i<len ; i++)  // recorre el array pasandole cada alumno a la funcion qe sabe mostrarlo
        {
            if(list[i].isEmpty == OCUPADO ) // acordate de llevar el define ocupado a la biblioteca!!!!
            {     // para que busque todas las cargadas
                mostrarPersona(list[i]);  // y me las muestre!
                flag = 0; // cambia a 0: porqe entro a este if y encontro y mostro una persona!
            }
        }
        if(flag) // cuando dejo flag solo quiere decir qe es verdadero el valor, es como decir: flag = 1 !!! en este caso sigue valiendo 1
        {                                                      // entonces quiere decir que no entro al if anterior porqe no habia personas
            printf("No hay personas para listar.\n");
        }
        todoOk = 1;
    }

    return todoOk;
}
