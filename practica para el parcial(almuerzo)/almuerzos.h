typedef struct
{
    int dia,mes,anio;
} eFecha;

typedef struct
{
    int Id;
    char descripcion[51];
} eSector;

typedef struct
{
    char apellido[51];
    char nombre[51];
    int edad;
    int ;
    int isEmpty;
    int ePaisId;
    int dni;

} ePersona;

typedef struct
{
    int codigoMenu;
    char descripcion[51];
    float importe;
}eMenu;

void alta(ePersona per[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona per[],int cantidad);
void ordenar(ePersona per[],int cantidad);
void init(ePersona pers[],int cantidad);

