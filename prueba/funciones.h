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
    char Nombre[31];
    int Edad;
    eFecha FechaNac;
    int isEmpty;
    int ePaisId;
} ePersona;

void alta(ePersona per[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona per[],int cantidad);
void ordenar(ePersona per[],int cantidad);
void init(ePersona pers[],int cantidad);
