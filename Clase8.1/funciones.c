#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANT 3

void alta(ePersona per[],int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        printf("\nIngrese su Nombre: ");
        fflush(stdin);
        scanf("%s",per[i].Nombre);

        printf("\nIngrese su Apellido: ");
        fflush(stdin);
        scanf("%s",per[i].apellido);

        printf("\nIngrese su Edad: ");
        fflush(stdin);
        scanf("%d",&per[i].Edad);

        system("cls");

        per[i].isEmpty = 0;
    }
}

void mostrarUno(ePersona per)
{
    printf("\n-----Datos cargados-----\n");
    printf("\nNombre: %s",per.Nombre);
    printf("\nApellido: %s ",per.apellido);
    printf("\nEdad: %d",per.Edad);
    printf("\n-----------------------\n");
}

void mostrarTodos(ePersona per[],int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++){
        mostrarUno(per[i]);
    }
}

