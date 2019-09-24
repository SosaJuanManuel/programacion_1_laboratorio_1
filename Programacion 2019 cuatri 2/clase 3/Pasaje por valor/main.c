/*#include <stdio.h>
#include <stdlib.h>

    void muestra(int x,int y);
    int main(void)
    {
        int x,y;
        printf("Ingrese un numero entero");
        scanf("%d",&x);
        printf("Ingrese un numero entero");
        scanf("%d",&y);
        muestra(x,y);
        printf("\n-----valores dentro de main----");
        printf("\nx vale %d \ny vale %d",x,y);

        return 0;
    }
    void muestra(int x,int y)
    {
        x=y;
        printf("\n-----valores dentro de la funcion----");
        printf("\nx vale %d \ny vale %d",x,y);
    }
  */

#include <stdio.h>
#include <stdlib.h>

    void muestra(int *x,int y);
    int main(void)
    {
        int x,y;
        printf("Ingrese un numero entero");
        scanf("%d",&x);

        printf("Ingrese un numero entero");
        scanf("%d",&y);

        muestra(&x,y);//(el & hace referecnia a la direccion de memoria)

        printf("\n-----valores dentro de main----");
        printf("\nx vale %d \ny vale %d",x,y);

        return 0;
    }
    void muestra(int *x,int y)
    {
        *x=y;//(y se asigna al dato que esta en esa direccion de memoria)
        printf("\n-----valores dentro de la funcion----");
        printf("\nx vale %d \ny vale %d",*x,y);
    }

