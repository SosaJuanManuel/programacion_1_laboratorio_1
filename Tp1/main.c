#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    int validarUno=-1;
    int validarDos=-1;
    int validarResultado=-1;
    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando %.2f \n",numeroUno);
        printf("\n2- Ingresar 2do operando %.2f\n",numeroDos);
        printf("\n3- Calcular todas las operaciones\n");
        printf("\n4- Informar resultados\n");
        printf("\n5- Salir\n\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            validarUno = ingresoX(&numeroUno);
            break;
        case 2:
            validarDos = ingresoY(&numeroDos);
            break;
        case 3:
        printf("\n Calcular la suma (%.2f + %.2f)\n",numeroUno,numeroDos);
        printf("\n Calcular la resta (%.2f - %.2f)\n",numeroUno,numeroDos);
        printf("\n Calcular la division (%.2f / %.2f)\n",numeroUno,numeroDos);
        printf("\n Calcular la multiplicacion (%.2f * %.2f)\n",numeroUno,numeroDos);
        printf("\n Calcular el factorial (%.2f!)\n",numeroUno);
            break;
        case 4:
            suma(numeroUno,numeroDos,validarResultado);
            resta(numeroUno,numeroDos,validarResultado);
            division(numeroUno,numeroDos,validarResultado);
            multiplicacion(numeroUno,numeroDos,validarResultado);
            factorizar(numeroUno, validarResultado);
            break;
        case 5:
            seguir = 'n';
            break;
        }
        if(validarUno==0 && validarDos==0)
        {
            validarResultado=0;
        }
    }
    return 0;
}
