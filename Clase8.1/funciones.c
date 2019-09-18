#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANT 5;

void alta(ePersona pers[],int cantidad)
{
    int i;

    for(i=0; i<CANT; i++)
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

        system("cls")

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

void mostrarTodos(ePersona pers[],int cantidad)
{
    int i;

    for(i=0; i<CANT; i++){
        mostrarUno(per[i]);
    }
}

void ordenar(ePersona pers[],int cantidad)
{
    int i,j,auxPer;

    for(i00;i<CANT-1;i++)
    {
        for(j=i+1;j<CANT;j++)
        {
            if(pers[i].edad>pers[j].edad)
            {
                auxPer=pers[i];
                pers[i]=pers[j];
                pers[j]=auxPer;
            }
        }
    }
}
