#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 5

typedef struct
{

    char Dni[9];
    char Nombre[31];
    int Edad;

} ePersona;

int main()
{
    int i;

    system("color F0");

    ePersona per[CANT];

    for(i=0; i<CANT; i++)
    {
        printf("\ningrese su dni: ");
        fflush(stdin);
        scanf("%s",per[i].Dni);

        printf("ingrese su nombre: ");
        fflush(stdin);
        scanf("%s",per[i].Nombre);

        printf("ingrese su edad: ");
        fflush(stdin);
        scanf("%d",&per[i].Edad);

        system("cls");

        printf("\ndni: %s ",per[i].Dni);
        printf("\nnombre: %s",per[i].Nombre);
        printf("\nedad: %d",per[i].Edad);
        printf("\nid nro: %d",i);
        printf("\n-----------------------\n");
    }

    for(i=0; i<CANT; i++)
    {
        printf("\ndni: %s ",per[i].Dni);
        printf("\nnombre: %s",per[i].Nombre);
        printf("\nedad: %d",per[i].Edad);
        printf("\nid nro: %d",i);
        printf("\n-----------------------\n");
    }

    return 0;
}




