typedef struct
{
    int codigoAlmuerzo;
    int codigoMenu;
    int legajoEmpleado;
    int fecha;

}eAlmuerzo;

typedef struct
{
    int Id;
    char descripcion[31];
}eSector;

typedef struct
{
    int legajo;
    char apellido[31];
    char nombre[31];
    char sexo
    float salario;
    int isEmpty;
    int idSector;
    int fechaIngreso;

}eEmpleado;

typedef struct
{
    int codigo;
    char descripcion[31];
    float importe;

}eMenu;

void alta(ePersona per[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona per[],int cantidad);
void ordenar(ePersona per[],int cantidad);
void init(ePersona pers[],int cantidad);

