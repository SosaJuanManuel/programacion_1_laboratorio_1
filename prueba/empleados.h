#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED

#define TEXT_SIZE 20

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} Employee;


#endif // FANTASMA_H_INCLUDED

int empleado_Inicializar(Employee array[], int size);                                    //cambiar empleado
int empleado_buscarEmpty(Employee array[], int size, int* posicion);                    //cambiar empleado
int empleado_buscarID(Employee array[], int size, int valorBuscado, int* posicion);                    //cambiar empleado
int empleado_buscarInt(Employee array[], int size, int valorBuscado, int* posicion);                    //cambiar empleado
int empleado_buscarString(Employee array[], int size, char* valorBuscado, int* indice);                    //cambiar empleado
int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector);                          //cambiar empleado
int removeEmployee(Employee* list, int len, int id);                                      //cambiar empleado
int empleado_bajaValorRepetidoInt(Employee array[], int sizeArray, int valorBuscado);
int empleado_modificar(Employee array[], int sizeArray);                                //cambiar empleado
int empleado_ordenarPorString(Employee array[],int size);                              //cambiar empleado
int empleado_listar(Employee array[], int size);                      //cambiar fantasma
