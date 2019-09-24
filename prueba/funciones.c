#include <stdio.h>
#include <stdlib.h>
#define CANT 5
#include "funciones.h"

void alta(ePersona per[],int cantidad)
{
    int i,k=0;
    char ingresar = 's';

    while(ingresar=='s')
    {
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

                printf("\nIngrese su DNI: ");
                fflush(stdin);
                scanf("%d",&per[i].dni);

                printf("\nIngrese su dia de ingreso: ");
                fflush(stdin);
                scanf("%d",&per[i].FechaNac.dia);

                printf("\nIngrese su mes de ingreso: ");
                fflush(stdin);
                scanf("%d",&per[i].FechaNac.mes);

                printf("\nIngrese su anio de ingreso: ");
                fflush(stdin);
                scanf("%d",&per[i].FechaNac.anio);

                system("cls");

                per[i].isEmpty = 0;

                break;
            }
            else
            {
                printf("Error");
            }
        }
        k++;
        if(k < cantidad)
        {
            do
            {
                printf("ingresar otro dato? s/n :");
                fflush(stdin);
                scanf("%c",&ingresar);
            }
            while(ingresar != 's' && ingresar != 'n');
        }
        else
        {
            break; // rompe el while
        }
    }
}

void mostrarUno(ePersona per)
{
    printf("\n-----Datos cargados-----\n");
    printf("\nNombre: %s",per.nombre);
    printf("\nApellido: %s ",per.apellido);
    printf("\nEdad: %d\n",per.edad);
    printf("\nDNI: %d\n",per.dni);
    printf("\nFecha de ingreso (dd/mm/aa): %d/%d/%d",per.FechaNac.dia,per.FechaNac.mes,per.FechaNac.anio);
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
void Baja (ePersona per[], int cantidad)
{
    int auxDNI;
    int flag=0,i;
    char rta;

    printf("que DNI desea buscar?");
    scanf("%d", &auxDNI);

    for(i=0; i<CANT; i++)
    {
        if(auxDNI==per[i].dni)
        {
            printf("\nDNI:%d\nApellido:%s\nNombre:%s\nEdad:%d\n",per[i].dni, per[i].apellido, per[i].nombre,per[i].edad);
            do
            {
                printf("\nDesea borrar este registro s/n");
                fflush(stdin);
                scanf("%c",&rta);
            }
            while( rta != 's' && rta != 'n' );
            if(rta=='s')
            {
                per[i].isEmpty=1;
            }
            else
            {
                printf("\nno se dio de baja\n");
            }
        }
        flag=1;
        break;
    }
    if (flag==0)
    {
        printf("no existe dato\n");
    }
}
