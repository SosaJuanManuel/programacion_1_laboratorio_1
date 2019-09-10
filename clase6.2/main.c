#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 31

int main()
{
    char nombre[MAX],copia[MAX];

    printf("\nIngrese un nombre: ");
    fgets(nombre,MAX,stdin);
    strcpy(copia,nombre);
    printf("\nSe ingreso:%s \n",nombre);
    printf("copia: %s",copia);

    if(strcmp(nombre,copia) == 0)
    {
        printf("son iguales");
    }

    //ctype.h libreria necesaria para los siguientes comandos

    //strupr y strlwr convierten la cadena en mayuscula y en minuscula respectivamente

    //letra = toupper(letra); y letra = tolower(letra);
    //convierten UN SOLO CARACTER en mayuscula y minuscula respectivamente

    return 0;
}
