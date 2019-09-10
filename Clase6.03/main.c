#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 31

int main()
{
    //strcat(destino,origen) concatena

    char nombre[MAX]="juan";
    char apellido[MAX]="lopez";
    char apeNom[62];

    apeNom[0]='\0';
    fflush(stdin);
    strcat(apeNom,apellido);
    strcat(apeNom," ");
    strcat(apeNom,nombre);

    printf(apeNom);

    return 0;



}
