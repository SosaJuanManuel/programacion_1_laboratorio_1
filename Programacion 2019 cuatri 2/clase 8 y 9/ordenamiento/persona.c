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
            printf("\ningresar dia de nacimiento:");
            scanf("%d", &per[i].fechaNac.dia);
            printf("\ningresar mes de nacimiento:");
            scanf("%d", &per[i].fechaNac.mes);
            printf("\ningresar anio de nacimiento:");
            scanf("%d", &per[i].fechaNac.anio);
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
    printf("\nApellido:%s\nNombre:%s\nEdad:%d\nDia de nacimiento:%d\nmes de nacimiento:%d\nanio de nacimiento:%d\n", per.apellido, per.nombre,per.edad,per.fechaNac.dia,per.fechaNac.mes,per.fechaNac.anio);
}

void ordenarEdad(ePersona per[],int MAX){
    int i,j;
    ePersona auxPer;
     for(i=0;i<MAX-1;i++){
                for(j=i+1;j<MAX;j++){
                    if(per[i].edad>per[j].edad){
                        auxPer=per[i];
                        per[i]=per[j];
                        per[j]=auxPer;
                    }
                }
            }
}

void init (ePersona per[], int MAX){

    int i;
    for(i=0; i<MAX; i++)
    {
        per[i].isEmpty=1;
    }

}
