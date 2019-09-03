#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main()
{
    int edad[MAX],legajo[MAX],i;
    float sueldo[MAX],suma=0,prom,aux;

    for(i=0; i<MAX; i++)
    {
        printf("\n-----------------------------\nIngrese la edad del legajo %d: ",
               i+1);
        scanf("%d",&edad[i]);
        printf("\nIngrese el sueldo del legajo %d: ",i+1);
        scanf("%f",&aux);
        sueldo[i]=aux;
        printf("\ningrese el numero de legajo del individuo %d :",i+1);
        scanf("%d",&legajo[i]);


    }

    for(i=0;i<MAX;i++)
    {
    printf("\nlos datos del numero %d son: \nedad:%d \nsueldo:%.2f \nlegajo:%d\n \n-----------------------------\n",
           i+1,edad[i],aux,legajo[i]);
    }

    for(i=0; i<MAX; i++){
        suma=suma+sueldo[i];
    }

    prom=suma/MAX;
    printf("\n El sueldo promedio es %.2f\n",prom);

    return 0;
}
