#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(void)
{
    int isEmpty[MAX], edad[MAX], i, opcion=0;
    float salario[MAX], aux;
    char seguir ='s';

    for(i=0; i<MAX; i++)
    {
        isEmpty[i]=1;
    }

    do{

        printf("1- Cargar Dato\n2- Mostrar\n3- salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                for(i=0; i<MAX; i++)
                {
                    if(isEmpty[i]==1)
                    {
                        printf("Ingrese edad del legajo %d :",i+1);
                        scanf("%d",&edad[i]);
                        printf("Ingrese el sueldo del legajo %d :", i+1);
                        scanf("%f",&aux);
                        salario[i]=aux;
                        isEmpty[i]=0;
                        break;
                    }
                }
                break;

            case 2:

                for(i=0;i<MAX;i++)
                {
                    if(isEmpty[i]==0) {
                        printf("Legajo %d Edad %d Sueldo: %.0f \n", i+1,edad[i], salario[i]);
                    } else {
                        break;
                    }
                }
                break;

            case 3:
                seguir='n';
                break;
        }
    }while(seguir=='s');
    return 0;
}
