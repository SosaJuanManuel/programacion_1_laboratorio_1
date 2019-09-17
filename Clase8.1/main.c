#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define CANT 5

int main()
{
    int i;
    ePersona per[5];

    for(i=0; i<CANT; i++)
    {
        per[i] = alta(per[i]);
        mostrar(per[i]);
    }
    return 0;
}
