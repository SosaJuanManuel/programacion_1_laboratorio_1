#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include "utn.h"
#define CANT 5

int main()
{
    char seguir='s';
    int opcion;

    //ePersona pers[CANT]= {{"ap1","no1",1,0,1,1,1900},{"ap2","no2",2,0,2,2,1901},{"ap3","no3",3,0,3,3,1902},{"ap4","no4",4,0,4,4,1903},{"ap5","no5",5,0,5,5,1904}};
    ePersona pers[CANT];
    init(pers,CANT);

    do
    {
        printf("\nBienvenido:\n\npresiona 1 para Alta \npresiona 2 para Mostrar \npresiona 3 para Ordenar \npresiona 4 para Salir\npresiona 5 para la baja\n");
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            printf("ALTA:\n");
            alta(pers,CANT);
            break;
        case 2:
            system("cls");
            printf("Mostrar:\n");
            mostrarTodos(pers,CANT);
            break;
        case 3:
            system("cls");
            printf("Ordenar:\n");
            ordenar(pers,CANT);
            mostrarTodos(pers,CANT);
            break;
        case 4:
            seguir='n';
            printf("\nAdios\n");
            break;
        case 5:
            Baja(pers,CANT);
            break;
        }
    }
    while(seguir=='s');
    return 0;
}
