typedef struct
{
    char apellido[31];
    char Nombre[31];
    int Edad;
    int isEmpty;

}ePersona;

ePersona alta(ePersona per);
void mostrar(ePersona per);
