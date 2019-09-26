#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "empleados.h" //cambiar por nombre entidad


/** \brief  To indicate that all position in the array are empty,
*          this function put the flag (isEmpty) in TRUE in all
*          position of the array
* \param array empleado Array of empleado
* \param size int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int empleado_Inicializar(Employee array[], int size)                                    //cambiar empleado
{
    int retorno=-1;
    if(array!= NULL && size>0)
    {
        for(; size>0; size--)
        {
            array[size-1].isEmpty=1;
        }
        retorno=0;
    }
    return retorno;
}

//*****************************************
//Buscar
//Int
/** \brief Busca el primer lugar vacio en un array
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra un lugar vacio o Error [Invalid length or NULL pointer] - (0) si encuentra una posicion vacia
*
*/
int empleado_buscarEmpty(Employee array[], int size, int* posicion)                    //cambiar empleado
{
    int retorno=-1;
    int i;
    if(array!= NULL && size>=0 && posicion!=NULL)
    {
        for(i=0; i<size; i++)
        {
            if(array[i].isEmpty==1)
            {
                retorno=0;
                *posicion=i;
                break;
            }
        }
    }
    return retorno;
}

/** \brief Busca un ID en un array y devuelve la posicion en que se encuentra
* \param array empleado list de empleado
* \param len int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int findEmployeeById(Employee* list, int len,int id)                    //cambiar empleado
{
    int retorno=-1;
    int i;
    if(list!= NULL && len>=0)
    {
        for(i=0; i<len; i++)
        {
            if(list[i].isEmpty==1)
                continue;
            else if(list[i].id==id)                                                   //cambiar campo ID
            {
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}
/** \brief Busca un int en un array y devuelve la posicion en que se encuentra
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int empleado_buscarInt(Employee array[], int size, int valorBuscado, int* posicion)                    //cambiar empleado
{
    int retorno=-1;
    int i;
    if(array!= NULL && size>=0)
    {
        for(i=0; i<size; i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(array[i].sector==valorBuscado)                                                   //cambiar campo sector
            {
                retorno=0;
                *posicion=i;
                break;
            }
        }
    }
    return retorno;
}

//String
/** \brief Busca un string en un array
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int empleado_buscarString(Employee array[], int size, char* valorBuscado, int* indice)                    //cambiar empleado
{
    int retorno=-1;
    int i;
    if(array!=NULL && size>=0)
    {
        for(i=0; i<size; i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(strcmp(array[i].name,valorBuscado)==0)                                        //cambiar campo name
            {
                *indice=i;
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}

//*****************************************
//Alta
/** \brief Solicita los datos para completar la primer posicion vacia de un array
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \param contadorID int* Puntero al ID unico que se va a asignar al nuevo elemento
* \return int Return (-1) si Error [largo no valido o NULL pointer o no hay posiciones vacias] - (0) si se agrega un nuevo elemento exitosamente
*
*/
int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
    int retorno=1;
    int i;
    i = Employee.id;

    if(list[] < len)
    {
        if(i == id)
        {
            printf("ya existe ese id");
        }
        else
        {
            Employee.id=id;
            Employee.lastName=lastName;
            Employee.name=name;
            Employee.salary=salary;
            Employee.sector=sector;
            retorno =0;
        }
    }
    return retorno;
}
//*****************************************
//Baja valor unico
/** \brief Borra un elemento del array por ID
* \param array empleado list de empleado
* \param len int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se elimina el elemento exitosamente
*
*/
int removeEmployee(Employee* list, int len, int id)
{
    int retorno=-1;
    int i;
    if(list!= NULL && len>=0)
    {
        for(i=0; i<len; i++)
        {
            if(list[i].isEmpty==1)
                continue;
            else if(list[i].id==id)                                                   //cambiar campo ID
            {
                list[i].isEmpty = 1;
                list[i].id = 0;
                list[i].salary = 0;
                list[i].sector = 0;
                strcpy(list[i].name,"");
                strcpy(list[i].lastName,"");
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}
//*****************************************
//Modificar
/** \brief Busca un elemento por ID y modifica sus campos
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se modifica el elemento exitosamente
*
*/
int empleado_modificar(Employee array[], int sizeArray)                                //cambiar empleado
{
    int retorno=-1;
    int posicion;
    int id;                                                                                         //cambiar si no se busca por ID
    char opcion;
    if(array!=NULL && sizeArray>0)
    {
        utn_getUnsignedInt("\nID a modificar: ","\nError",1,sizeof(int),1,sizeArray,1,&id);         //cambiar si no se busca por ID
        if(empleado_buscarID(array,sizeArray,id,&posicion)==-1)                                   //cambiar si no se busca por ID
        {
            printf("\nNo existe este ID");                                                          //cambiar si no se busca por ID
        }
        else
        {
            do
            {
                //copiar printf de alta
                printf("\n Posicion: %d\n ID: %d\n sector: %d\n salary: %f\n name: %s\n lastName: %s",
                       posicion, array[posicion].id,array[posicion].sector,array[posicion].salary,array[posicion].name,array[posicion].lastName);
                utn_getChar("\nModificar: A B C D S(salir)","\nError",'A','Z',1,&opcion);
                switch(opcion)
                {
                case 'A':
                    utn_getUnsignedInt("\n: ","\nError",1,sizeof(int),1,1,1,&array[posicion].sector);           //mensaje + cambiar campo sector
                    break;
                case 'B':
                    utn_getFloat("\n: ","\nError",1,sizeof(float),0,1,1,&array[posicion].salary);             //mensaje + cambiar campo salary
                    break;
                case 'C':
                    utn_getName("\n: ","\nError",1,TEXT_SIZE,1,array[posicion].name);                      //mensaje + cambiar campo name
                    break;
                case 'D':
                    utn_getTexto("\n: ","\nError",1,TEXT_SIZE,1,array[posicion].lastName);             //mensaje + cambiar campo lastName
                    break;
                case 'S':
                    break;
                default:
                    printf("\nOpcion no valida");
                }
            }
            while(opcion!='S');
            retorno=0;
        }
    }
    return retorno;
}

//*****************************************
//Ordenar
/** \brief Ordena por campo XXXXX los elementos de un array
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se ordena exitosamente
*
*/

//*****************************************
//Listar
/** \brief Lista los elementos de un array
* \param array empleado Array de empleado
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se lista exitosamente
*
*/
int printEmployees(Employee* list, int length)                      //cambiar empleado
{
    int retorno=-1;
    int i;
    if(list!=NULL && length>=0)
    {
        for(i=0; i<length; i++)
        {
            if(list[i].isEmpty==1)
                continue;
            else
                printf("\n ID: %d\n sector: %d\n salary: %f\n name: %s\n lastName: %s",
                       list[i].id,list[i].sector,list[i].salary,list[i].name,list[i].lastName);      //cambiar todos
        }
        retorno=0;
    }
    return retorno;
}

