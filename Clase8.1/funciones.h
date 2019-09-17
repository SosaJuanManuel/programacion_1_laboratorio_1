typedef struct
{
    char apellido[31];
    char Nombre[31];
    int Edad;
    int isEmpty;

}ePersona;

void alta(ePersona per[],int cantidad);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona per[],int cantidad);

