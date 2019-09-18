#include <stdio.h>
#include <stdlib.h>
#define CANT 5
#include "funciones.h"

void alta(ePersona per[],int cantidad)
{
    int i;
    for(i=0; i<CANT; i++)
    {
        if(per[i].isEmpty==1)
        {
            printf("\nIngrese su Nombre: ");
            fflush(stdin);
            scanf("%s",per[i].nombre);

            printf("\nIngrese su Apellido: ");
            fflush(stdin);
            scanf("%s",per[i].apellido);

            printf("\nIngrese su Edad: ");
            fflush(stdin);
            scanf("%d",&per[i].edad);

            printf("\nIngrese su dia de ingreso: ");
            fflush(stdin);
            scanf("%d",&per[i].fechaNac.dia);

            printf("\nIngrese su mes de ingreso: ");
            fflush(stdin);
            scanf("%d",&per[i].fechaNac.mes);

            printf("\nIngrese su anio de ingreso: ");
            fflush(stdin);
            scanf("%d",&per[i].fechaNac.anio);

            system("cls");

            per[i].isEmpty = 0;
        }
        else
        {
            printf("Error");
        }
    }
}

void mostrarUno(ePersona per)
{
    printf("\n-----Datos cargados-----\n");
    printf("\nNombre: %s",per.nombre);
    printf("\nApellido: %s ",per.apellido);
    printf("\nEdad: %d\n",per.edad);
    printf("\nFecha de ingreso (dd/mm/aa): %d/%d/%d",per.fechaNac.dia,per.fechaNac.mes,per.fechaNac.anio);
    printf("\n-----------------------\n");
}

void mostrarTodos(ePersona per[],int cantidad)
{
    int i=0;

    if(per[i].isEmpty==0)
    {
        for(i=0; i<CANT; i++)
        {
            mostrarUno(per[i]);
        }
    }
    else
    {
        printf("\nError, Datos Incompletos!!!\n");
    }
}

void ordenar(ePersona pers[],int cantidad)
{
    int i,j;
    ePersona auxPer;

    for(i=0; i<CANT-1; i++)
    {
        for(j=i+1; j<CANT; j++)
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

void init(ePersona pers[],int cantidad)
{
    int i;

    for(i=0; i<CANT; i++)
    {
        pers[i].isEmpty=1;
    }
}

/*void mostrarPais(ePersona pers[],int cantidad)
{
    int i,j;




}*/
//debe traer un id de cada persona con sus nacionalidades
