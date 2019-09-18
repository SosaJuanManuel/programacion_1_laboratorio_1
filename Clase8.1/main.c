#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define CANT 5

int main()
{

    ePersona pers[CANT];

    alta(pers,CANT);

    system("cls");

    mostrarTodos(pers,CANT);

    ordenar(pers,CANT)

    return 0;
}
