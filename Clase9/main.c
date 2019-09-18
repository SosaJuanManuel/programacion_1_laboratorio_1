#include <stdio.h>
#include <stdlib.h>
#define CANT 5
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion;

    /*ePersona pers[CANT]= {{"ap1","no1",1,1,1,1900},
     {"ap2","no2",20,2,2,1901},
     {"ap3","no3",13,3,3,1902},
     {"ap4","no4",58,4,4,1903},
     {"ap5","no5",40,5,5,1904}};*/ //harcodeo

    ePersona pers[CANT];
    init(pers,CANT);

    do
    {
        printf("\n-----------------OPCIONES---------\n"
               "presiona 1 para Alta"
               "\npresiona 2 para Mostrar"
               "\npresiona 3 para Ordenar"
               "\npresiona 4 para Limpiar pantalla"
               "\npresiona 5 para Salir\n----------------------------------\n");
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
            system("cls");
            break;

        case 5:
            seguir='n';
            printf("\nAdios\n");
            break;

        }
    }
    while(seguir=='s');

    return 0;
}
