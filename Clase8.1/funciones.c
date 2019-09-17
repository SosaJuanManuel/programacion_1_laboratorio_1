#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANT 5

ePersona alta(ePersona per)
{

    printf("\nIngrese su Nombre: ");
    scanf("%s",per.Nombre);

    printf("\nIngrese su Apellido: ");
    fflush(stdin);
    scanf("%s",per.apellido);

    printf("\nIngrese su Edad: ");
    fflush(stdin);
    scanf("%d",&per.Edad);

    system("cls");

    return per;
}

void mostrar(ePersona per)
{

    printf("\nNombre: %s",per.Nombre);
    printf("\nApellido: %s ",per.apellido);
    printf("\nEdad: %d",per.Edad);
    printf("\n-----------------------\n");
}

