#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "empleados.h"
#define MAX_EMPLOYEE 1000

int main()
{
    int opcion;
    int i=0;
    Employee arrayEmployee[MAX_EMPLOYEE];


    empleado_Inicializar(arrayEmployee,MAX_EMPLOYEE);
    do
    {
        utn_getUnsignedInt("\nEmpleadoes\n1) Alta \n2) Modificar \n3) Baja \n4)informe \n5)Salir\n",
                      "\nError",1,sizeof(int),1,11,1,&opcion);
        switch(opcion)
        {
            case 1: //Alta
                addEmployee(arrayEmployee,MAX_EMPLOYEE,&i);
                break;
            case 2: //Modificar
                empleado_modificar(arrayEmployee,MAX_EMPLOYEE);
                break;

            case 3: //Baja
                removeEmployee(arrayEmployee,MAX_EMPLOYEE,1);
                break;

            case 4://Listar
                empleado_ordenarPorString(arrayEmployee,MAX_EMPLOYEE);
                printEmployees(arrayEmployee,MAX_EMPLOYEE);
                break;

            case 5://Informe
                break;
            default:
                printf("\nOpcion no valida");

        }
    }
    while(opcion!=5);
    return 0;
}




