#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()//carga aleatoria
{
    int edad[MAX],i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;
        for(i=0;i<MAX;i++)
        {
            edad[i]=0;
            sueldo[i]=0;
        }
        do
        {
            printf("Ingrese Legajo");
            scanf("%d",&leg);
            printf("Ingrese Edad");
            scanf("%d",&edad[leg-1]);
            printf("Ingrese el sueldo");
            scanf("%f",&aux);
            sueldo[i-1]=aux;
            printf("Desea ingresar otro dato S/N?");
            fflush(stdin);
            scanf("%c",&seguir);
        } while(seguir=='s');

        for(i=0;i<MAX;i++)
            {
                suma=suma+sueldo[i];
            }
        prom=suma/MAX;
        printf("El sueldo promedio es %.2f",prom);

        return 0;
}
