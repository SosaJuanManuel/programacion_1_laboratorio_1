#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "persona.h"

void Alta(ePersona per[], int MAX)
{
    int i;
    for(i=0; i<MAX; i++)
    {

        if(per[i].isEmpty==1)
        {
            printf("ingresar DNI");
            scanf("%d",&per[i].DNI);
            printf("\ningresar apellido:");
            fflush(stdin);
            scanf("%s", per[i].apellido);
            printf("\ningresar nombre:");
            fflush(stdin);
            scanf("%s", per[i].nombre);
            printf("\ningresar edad:");
            scanf("%d", &per[i].edad);
            per[i].isEmpty=0;
            break;
        }

    }


}

/*ePersona Alta(ePersona per)
{
    printf("ingresar apellido:");
    fflush(stdin);
    scanf("%s", per.apellido);
    printf("\ningresar nombre:");
    fflush(stdin);
    scanf("%s", per.nombre);
    printf("\ningresar edad:");
    scanf("%d", &per.edad);
    per.isEmpty=0;
    return per;
}*/

void mostrarTodos(ePersona per[],int MAX)
{
    int i;
    for(i=0; i<MAX; i++)
    {


        if(per[i].isEmpty==0)
        {
            mostrarUno(per[i]);
            //printf("\nApellido:%s\nNombre:%s\nEdad:%d\n", per[i].apellido, per[i].nombre,per[i].edad);
        }
        else
        {
            break;
        }
    }

}
void mostrarUno(ePersona per)
{
    printf("\nDNI:%d\nApellido:%s\nNombre:%s\nEdad:%d\n",per.DNI, per.apellido, per.nombre,per.edad);
}

void ordenarEdad(ePersona per[],int MAX)
{
    int i,j;
    ePersona auxPer;
    for(i=0; i<MAX-1; i++)
    {
        for(j=i+1; j<MAX; j++)
        {
            if(per[i].edad>per[j].edad)
            {
                auxPer=per[i];
                per[i]=per[j];
                per[j]=auxPer;
            }
        }
    }
}

void init (ePersona per[], int MAX)
{

    int i;
    for(i=0; i<MAX; i++)
    {
        per[i].isEmpty=1;
    }

}

void Baja (ePersona per[], int MAX)
{
    int auxDNI;
    int flag=0,i;
    char rta;
    printf("que DNI desea buscar?");
    scanf("%d", &auxDNI);
    for(i=0; i<MAX; i++)
    {
        if(auxDNI==per[i].DNI)
        {
            printf("\nDNI:%d\nApellido:%s\nNombre:%s\nEdad:%d\n",per[i].DNI, per[i].apellido, per[i].nombre,per[i].edad);
            do
            {
                printf("\nDesea borrar este registro s/n");
                fflush(stdin);
                scanf("%c",&rta);
                rta=tolower(rta);
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

void Modificacion (ePersona per[], int MAX)
{
    int auxDNI;
    int flag=0,i,OP;//la variable de opcion tiene que ser distinta a la principal
    char seguir='s',rta;

    printf("Que DNI desea buscar?");
    scanf("%d", &auxDNI);
    for(i=0; i<MAX; i++)
    {
        if(auxDNI==per[i].DNI)
        {
            printf("\nDNI:%d\nApellido:%s\nNombre:%s\nEdad:%d\n",per[i].DNI, per[i].apellido, per[i].nombre,per[i].edad);
            do
            {
                printf("\ndesea modificar este registro s/n");
                fflush(stdin);
                scanf("%c",&rta);
            }
            while(rta!='s'&&rta!='n');
            if(rta=='s')
            {
                do
                {

                    printf("\nQue desea modificar ?\n1- DNI\n2- Apellido\n3- Nombre\n4- Edad\n5-salir\n");
                    scanf("%d",&OP);
                    switch(OP)
                    {
                    case 1:

                        printf("\nIngrese nuevo DNI;");
                        scanf("%d",&per[i].DNI);
                        system("cls");
                        break;

                    case 2:
                        printf("\nIngrese nuevo Apellido:");
                        fflush(stdin);
                        scanf("%s",per[i].apellido);
                        system("cls");
                        break;

                    case 3:
                        printf("\nIngrese nuevo Nombre:");
                        fflush(stdin);
                        scanf("%s",per[i].nombre);
                        system("cls");
                        break;

                    case 4:
                        printf("\nIngrese nueva Edad:");
                        scanf("%d",&per[i].edad);
                        system("cls");
                    case 5:
                        seguir='n';
                        break;
                    }
                }
                while(seguir=='s');
            }
            else
            {
                printf("no se dio de baja");
            }
        }
        flag=1;
    }
    if (flag==0)
    {
        printf("no existe dato");
    }
}
