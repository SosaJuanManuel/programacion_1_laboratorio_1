#include <stdio.h>
#include <stdlib.h>



    void main()
{
    int i=0;
    int suma = 0;
    int max;
    int min;
    int flag=0;
    int aux;
    for(i; i<10;i++)
    {
        scanf("%d",&aux);
        suma=suma+aux;
        if(flag==0){
            max=aux;
            min=aux;
            flag=1;
        }
        if(aux>max)
        {
            max = aux;
        }
        if(aux<min)
        {
            min = aux;
        }
    }
    printf("la suma es:%d\n",suma);
    printf("El maximo es:%d\n",max);
    printf("El minimo es:%d\n",min);
    }

