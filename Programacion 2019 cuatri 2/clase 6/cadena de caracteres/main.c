#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define max 41

int main()
{
    char nombre [max];
    int cant;
        printf("\n Ingrese nombre:");
        //scanf("%s", nombre);
       // gets(nombre);no se usa, es insegura, es unicamente para windows,
       fflush(stdin);
      /* fgets(nombre, max, stdin);// el problema de esta es que guarda el entrer como otro caracter antes del \0

       cant=strlen(nombre);//dice la cantidad de caracteres en el string
        printf("\n Nombre:%s\n Cantidad:%d", nombre, cant);
        nombre[cant-1]='\0';
        cant=strlen(nombre);
        printf("\n Nombre:%s\n Cantidad:%d", nombre, cant);*/
        fagets(nombre);

        return 0;
}
