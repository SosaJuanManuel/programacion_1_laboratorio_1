#include <stdio.h>
#include <stdlib.h>

int suma(int operando1, int operando2);//protoripo o declaracion

int main()
{
    int op1, op2, res;

        printf("operando 1: ");
        scanf("%d",&op1);
        printf("operando 2: ");
        scanf("%d",&op2);
        res=suma(op1,op2);//llamada de la funcion
        printf("La suma es: %d", res);

    return 0;
}
int suma(int operando1, int operando2){//cuerpo o definicion
    int resultado=operando1+operando2;
    return resultado;
}
