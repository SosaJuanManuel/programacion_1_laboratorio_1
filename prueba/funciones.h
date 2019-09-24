typedef struct
{
    int dia,mes,anio;
} eFecha;

typedef struct
{
    int Id;
    char descripcion[31];
} ePais;

typedef struct
{
    char apellido[31];
    char nombre[31];
    int edad;
    eFecha FechaNac;
    int isEmpty;
    int ePaisId;
    int dni;

} ePersona;

void alta(ePersona per[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona per[],int cantidad);
void ordenar(ePersona per[],int cantidad);
void init(ePersona pers[],int cantidad);
