
typedef struct
{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
} ePersona;

//ePersona Alta(ePersona per); aca le paso de a 1
void Alta(ePersona per[],int MAX);

void mostrarTodos (ePersona per[],int MAX);//reemplazar esto por mostrartodos
// for ( )
    //mostarUno(pers[i])

void mostrarUno(ePersona per);


