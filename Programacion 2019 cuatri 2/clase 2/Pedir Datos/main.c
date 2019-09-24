#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo;
    char nombre[31];
    float salario;
    char sexo;

    printf("Ingrese numero de legajo: ");
    scanf("%d",&legajo);
    printf("\nIngrese nombre: ");
    fflush(stdin);//(limpia la basura del buffer o teclado)
    scanf("%s",nombre);
    printf("\nIngrese salario: ");
    scanf("%f",&salario);
    printf("\nIngrese sexo (m/f): ");
    fflush(stdin);
    scanf("%c",&sexo);
    system("cls");//(limpia pantalla)
    printf("Legajo:\tNombre:\tSexo:\tSalario:");
    printf("\n%d\t%s\t%c\t%.2f",legajo, nombre, sexo, salario);



    return 0;
}
