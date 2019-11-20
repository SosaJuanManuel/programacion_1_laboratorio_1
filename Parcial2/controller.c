#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "parser.h"
#include "funciones.h"
#include "controller.h"


int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    int retorno=-1;
    int opcion;
    FILE* pFile = NULL;

    if (path!=NULL && pArrayListEmployee!=NULL)
    {
        pFile = fopen (path, "r");
        getInt("Esta a punto de cargar la lista: \nSi desea conservar los cambios hechos debe volver al menu y elegir la opcion 8.\n"
               "Si ya ha guardado los cambios o esta es la primera vez que carga la lista solo seleccione continuar.\n\n 1-Volver al menu.\n 2-Continuar.\n","Error, opcion invalida.\n",1,2,3,&opcion);
        if(opcion==2)
        {
            if (pFile!=NULL)
            {
                ll_clear(pArrayListEmployee);
                if (!parser_EmployeeFromText(pFile,pArrayListEmployee))
                {
                    retorno=0;
                    printf ("Carga ok.\n");
                }
            }
        }
        fclose (pFile);
    }
    return retorno;
}

/** \brief Carga los datos de los empleados desde el archivo data.bin (modo binario).
 *
 * \param path char* archivo a cargar
 * \param pArrayListEmployee LinkedList* puntero al array de empleados.
 * \return int retorno -1 si path NULL o pArrayListEmployee NULL - 0 si logra cargar los datos correctamente.
 *
 */
int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{
    int retorno = -1;
    FILE *pFile = NULL;
    int opcion;

    if(path != NULL && pArrayListEmployee != NULL)
    {
        pFile = fopen(path, "rb");
        getInt("Esta a punto de cargar la lista: \nSi desea conservar los cambios hechos debe volver al menu y elegir la opcion 8.\n"
               "Si ya ha guardado los cambios o esta es la primera vez que carga la lista solo seleccione continuar.\n\n 1-Volver al menu.\n 2-Continuar.\n","Error, opcion invalida.\n",1,2,3,&opcion);
        if(opcion==2)
        {
            if(pFile != NULL)
            {
                ll_clear(pArrayListEmployee);
                if (!parser_EmployeeFromBinary(pFile,pArrayListEmployee))
                {
                    retorno=0;
                    printf ("Carga binaria ok.\n");
                }
            }
        }
        fclose(pFile);
    }
    return retorno;
}
