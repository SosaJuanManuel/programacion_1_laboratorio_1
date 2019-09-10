#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 31

int main()
{
    char nombre[MAX];
    int largo =strlen(nombre);//le pasas la cadena

    printf("Ingrese su nombre: ");
    //gets(nombre,); no se usa, es solo para windows y tiene agujeros de seguridad
    //fgets(cadena,cantidad,stdin);
    fflush(stdin);
    fgets(nombre,MAX,stdin);
    nombre[largo-1]='\0';
    largo = strlen(nombre);
    printf("\nTe llamas: %s y el largo es: %d",nombre,largo);

    return 0;
}
