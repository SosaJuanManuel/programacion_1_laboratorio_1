typedef struct{
    int dia,mes,anio;
}eFecha;
typedef struct{
    int id;
    char descripcion[31];
}ePais;
typedef struct
{
    char apellido[31];
    char nombre[31];
    int edad;
    int isEmpty;
    eFecha fechaNac;
    int ePaisId;
} ePersona;

//ePersona Alta(ePersona per); aca le paso de a 1
void Alta(ePersona per[],int MAX);

void mostrarTodos (ePersona per[],int MAX);//reemplazar esto por mostrartodos
// for ( )
    //mostarUno(pers[i])

void mostrarUno(ePersona per);

void ordenarEdad(ePersona per[],int MAX);

void init (ePersona per[], int MAX);
void mostarPorPais (ePersona per[], int MAX, ePais paises[], int PAIS);


