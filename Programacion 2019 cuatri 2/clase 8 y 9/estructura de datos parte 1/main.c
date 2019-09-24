#include <stdio.h>
#include <stdlib.h>
#define MAX 3
//primero ejemplo


typedef struct
{
    char dni[9];
    char nombre[31];
    int edad;
} ePersona;
int main()
{
    int i, opcion=0,isEmpty[MAX];
    char seguir ='s';
    ePersona per[MAX];

    for(i=0; i<MAX; i++)
    {
        isEmpty[i]=1;
    }

    do
    {

        printf("1- Cargar Dato\n2- Mostrar\n3- salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            for(i=0; i<MAX; i++)
            {
                if(isEmpty[i]==1)
                {
                    printf("ingresar dni:");
                    fflush(stdin);
                    scanf("%s", per[i].dni);
                    printf("\ningresar nombre:");
                    fflush(stdin);
                    scanf("%s", per[i].nombre);
                    printf("\ningresar edad:");
                    scanf("%d", &per[i].edad);
                    isEmpty[i]=0;
                    break;
                }
            }
            break;

        case 2:

            for(i=0; i<MAX; i++)
            {
                if(isEmpty[i]==0)
                {
                    printf("\nDNI:%s\nNombre:%s\nEdad:%d\n", per[i].dni, per[i].nombre,per[i].edad);
                }
                else
                {
                    break;
                }
            }
            break;

        case 3:
            seguir='n';
            break;
        }
    }
    while(seguir=='s');
    /*ePersona per;

    printf("ingresar dni:");
    fflush(stdin);
    scanf("%s", per.dni);
    printf("\ningresar nombre:");
    fflush(stdin);
    scanf("%s", per.nombre);
    printf("\ningresar edad:");
    scanf("%d", &per.edad);
    printf("\nDNI:%s\nNombre:%s\nEdad:%d", per.dni, per.nombre,per.edad);*/
    return 0;
}
