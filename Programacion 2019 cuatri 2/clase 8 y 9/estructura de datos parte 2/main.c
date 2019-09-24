#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define MAX 3

int main()
{
    int i, opcion=0;
    char seguir ='s';
    ePersona per[MAX];//={{"ape1","nom1",1,0}}; forma de hardcodear

   for(i=0; i<MAX; i++)
    {
        per[i].isEmpty=1;
    }

    do
    {

        printf("1- Cargar Dato\n2- Mostrar\n3- salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:

            Alta(per,MAX);
            break;

        case 2:
            mostrarTodos(per, MAX);
            break;

        case 3:
            seguir='n';
            break;
        }
    }
    while(seguir=='s');

    return 0;
}
