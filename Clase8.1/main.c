#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANT 3

int main()
{

    ePersona pers[5];

    alta(pers,CANT);

    system("cls");

    mostrarTodos(pers,CANT);

    return 0;
}
