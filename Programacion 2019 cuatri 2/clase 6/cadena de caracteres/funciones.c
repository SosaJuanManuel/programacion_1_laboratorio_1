#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fagets (char *nombre){
    int cantidad;

    fgets(nombre,sizeof(nombre)-2,stdin);

    cantidad = strlen(nombre);

    nombre[cantidad-1] = '\0';

    printf("%s", nombre);


}


