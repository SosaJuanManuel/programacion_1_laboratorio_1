#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void Alta(ePersona per[], int MAX)
{
    int i;
    for(i=0; i<MAX; i++)
    {

        if(per[i].isEmpty==1)
        {
            printf("ingresar apellido:");
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
    printf("\nApellido:%s\nNombre:%s\nEdad:%d\n", per.apellido, per.nombre,per.edad);
}
