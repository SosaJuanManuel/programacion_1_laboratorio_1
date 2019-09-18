typedef struct
{
    char apellido[31];
    char Nombre[31];
    int Edad;
    int isEmpty;
}ePersona;

void alta(ePersona pers[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona pers[],int cantidad);
void ordenar(ePersona pers[],int CANT);
