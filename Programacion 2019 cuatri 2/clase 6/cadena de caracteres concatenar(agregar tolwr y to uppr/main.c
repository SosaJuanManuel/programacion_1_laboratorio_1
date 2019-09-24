#include <stdio.h>
#include <stdlib.h>
#define max 31
#include <string.h>

int main()
{
    char nombre[max]
    char apellido[max]
    char apNom [62];

        printf("Nombre:");
        fflush(stdin);
        gets(nombre);
        strlwr(nombre);
        strlwr(apellido);
        strcpy(apNom, apellido);//para evitar lo que haya en la memoria de apNom antes de cargar los datos
        //strcat(apNom, apellido);
        strcat(apNom, " ");
        strcat(apNom, nombre);

        return 0;
}
