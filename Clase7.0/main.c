#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

int main()
{
    int legajo[MAX],isEmpty[MAX],i;

    char sexo[MAX], nombre[MAX][31];

    for(i=0;i<MAX;i++){

        printf("\ningrese un nombre :");
        scanf("%s",nombre[i]);

        printf("\ningrese un sexo :");
        scanf("%s",sexo[i]);

         printf("\ningrese un legajo :");
         scanf("%d",legajo[i]);

         printf("nombre: %s , sexo: %s , legajo %d ",nombre,sexo,legajo);
    }

}
