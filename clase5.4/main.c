#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    int vec[MAX]= {7,5,6,3,2},aux,i,j;

    for(i=0; i<MAX-1; i++)
    {
        for(j=i+1; j<MAX; j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
    for(i=0;i<MAX;i++)
     printf("\nel valor es: %d\n",vec[i]);


    return 0;
}
