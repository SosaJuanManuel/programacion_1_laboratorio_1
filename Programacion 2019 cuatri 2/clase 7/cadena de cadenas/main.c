#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 5

int main()
{
    int legajo [max],isEmpty[max],i, opcion;
    char sexo [max],nombre [max][31];
    char seguir ='s';

        for(i=0; i<max; i++)
    {
        isEmpty[i]=1;
    }

    do{

        printf("1- Cargar Dato\n2- Mostrar\n3- salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                for(i=0; i<max; i++)
                {
                    if(isEmpty[i]==1)
                    {
                        printf("Ingrese legajo %d :",i+1);
                        scanf("%d",&legajo[i]);
                        printf("Ingrese el sexo del legajo %d:", legajo[i]);
                        fflush(stdin);
                        scanf("%c",sexo);
                        printf("ingrese Nombre del legajo %d:", legajo[i]);
                        fflush(stdin);
                        gets(nombre[i]);
                        isEmpty[i]=0;
                        break;
                    }
                }
                break;

            case 2:

                for(i=0;i<max;i++)
                {
                    if(isEmpty[i]==0) {
                        printf("Legajo %d Sexo %c Nombre %s \n", legajo[i],sexo[i], nombre[i]);
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
