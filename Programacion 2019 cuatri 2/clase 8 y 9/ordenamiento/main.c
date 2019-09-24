#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define MAX 3
#define PAIS 5

int main()
{
    int i,j,opcion=0;
    char seguir ='s';
    ePersona per[MAX];//={{"ape1","nom1",1,0}}; forma de hardcodear


    init(per,MAX);

    ePais paises[PAIS]={{1,"Argentina"},
                        {2,"Brazil"},
                       {3,"Uruguay"},
                       {4,"Paraguay"},
                       {5,"Peru"},};
     ePais auxPais;


    do
    {

        printf("1- Cargar Dato\n2- Ordenar\n3- Mostrar\n4- Mostrar por pais\n5-salir");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:

            Alta(per,MAX);
            system("cls");
            break;

        case 2:
            ordenarEdad(per,MAX);
            system("cls");
            break;

        case 3:
            system("cls");
            mostrarTodos(per, MAX);
            break;

        case 4:
            printf("Seleccione pais:\n1-argenina\n2-argenina\n3-argenina\n4-argenina\n5-argenina")
            scanf()
            for(i=0;i<MAX;i++){
                if(paises[i].id==auxPais){
                    for(j=0;j<PAIS;j++){
                        if(per[i].ePaisId==auxPais){

                        }
                    }
                }
            }
        case 5:
            seguir='n';
            break;
        }
    }
    while(seguir=='s');

    return 0;
}
