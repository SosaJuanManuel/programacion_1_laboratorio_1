#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int i,isEmpty[CANT],aux;
    char seguir ='s';

    while(seguir=='s'){
        for(i=0; i<CANT; i++)
        {
            isEmpty[i]=1;
        }
        for(i=0; i<CANT; i++)
        {
            if(isEmpty[i]==1)
            {
                printf("\ningrese su legajo: ");
                scanf("%d",&aux);
                isEmpty[i]=0;
                break;

            }

        }
        printf("ingresar mas datos?");
    }
    while(seguir=='s');
        return 0;
}
