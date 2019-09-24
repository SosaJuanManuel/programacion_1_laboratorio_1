#include <stdio.h>
#include <stdlib.h>
#define max 41
#include <string.h>

int main()
{
    char nombre1[max], nombre2[max];

        printf(" Nombre 1:");
        fflush(stdin);
        gets(nombre1);
        printf(" Nombre 2:");
        fflush(stdin);
        gets(nombre2);
        printf("Nombre 1:%s\nNombre 2:%s", nombre1, nombre2);


        if(strcmp(nombre1, nombre2)==0){
            printf("\n Deberias ingresar dos distintos");
        }
        strcpy(nombre1, nombre2);
        printf("\nNombre 1:%s\nNombre 2:%s", nombre1, nombre2);

        return 0;
}
