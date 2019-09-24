#include <stdio.h>
#include <stdlib.h>
#define MAX 2

/*int main()
{
    int edad [MAX],i;
        for(i=0;i<MAX;i++)
            {
               printf("Edad:");
               scanf("%d",&edad[i]);
            }
            printf("%d %d %d %d %d", edad[0],edad [1], edad [2], edad[3], edad[4]);
       return 0;
}*/

int main(void)//carga secuencial
{
    int edad[MAX],i;
    float sueldo[MAX],suma=0,prom,aux;
        for(i=0;i<MAX;i++)
            {
                printf("Ingrese la edad del legajo %d: ",i+1);//el i+1 es porque cuando el indice es 0 el legajo es 1 y los datos se organizan por indice
                scanf("%d",&edad[i]);

                printf("Ingrese el sueldo del legajo %d: ",i+1);
                scanf("%f",&aux);
                sueldo[i]=aux;

            }
        for(i=0;i<MAX;i++)
            {
                suma=suma+sueldo[i];
            }
                prom=suma/MAX;
                printf("El sueldo promedio es %.2f \n",prom);
         for(i=0;i<MAX;i++)
            {
                printf("Legajo %d Edad %d Sueldo: %.0f \n", i+1,edad[i], sueldo[i]);
            }

            return 0;
}
