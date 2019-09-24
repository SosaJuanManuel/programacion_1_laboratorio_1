#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "persona.h"
#define MAX 3


int main()
{
    int opcion=0;
    char seguir ='s';
    ePersona per[MAX];//={{"ape1","nom1",1,0}}; forma de hardcodear


    init(per,MAX);


    do
    {

        printf("1- Cargar Dato\n2- Ordenar\n3- Mostrar\n4- Baja\n5-Modificar\n6-Salir");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:

            Alta(per,MAX);
            system("cls");
            break;

        case 2:
            ordenarEdad(per,MAX);
            system("cls");
            break;

        case 3:
            system("cls");
            mostrarTodos(per, MAX);
            break;

        case 4:
            Baja(per, MAX);
            break;
        case 5:
            Modificacion(per, MAX);
            break;
        case 6:
            seguir='n';
            break;
        }
    }
    while(seguir=='s');

    return 0;
}
