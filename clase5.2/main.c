#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)
{
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;
    for(i=0; i<MAX; i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }
    do{
        printf("\n------------------------\nIngrese Legajo: ");
        scanf("%d",&leg);

        printf("\nIngrese Edad: ");
        scanf("%d",&edad[leg-1]);

        printf("\nIngrese el sueldo: ");
        scanf("%f",&aux);
        sueldo[i]=aux;

        printf("\nDesea ingresar otro dato s/n? ");
        fflush(stdin);
        scanf("%c",&seguir);


        }while(seguir=='s');

    for(i=0; i<MAX; i++)
        suma=suma+sueldo[i];


    prom=suma/MAX;
    printf("\nEl sueldo promedio es %.2f",prom);

    return 0;
}
