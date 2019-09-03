#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
*\brief solicita el valor del primer numero al usuario.
*\return regresa cero.
*
*/
int ingresoX(float *numeroUno)//pide el primer numero.
{
    float primerNumero;
    printf("\n ingrese el primer operando: ");
    scanf("%f",&primerNumero);
    *numeroUno=primerNumero;
    return 0;
}
/**
*\brief solicita el valor del segundo numero al usuario.
*\return regresa cero.
*
*/
int ingresoY(float *numeroDos)//pide el segundo numero.
{
    float segundoNumero;
    printf("\n ingrese el segundo operando: ");
    scanf("%f", &segundoNumero);
    *numeroDos = segundoNumero;
    return 0;
}

/** \brief realiza la suma de ambos operando.
 *
 * \param datoUno el primer operando.
 * \param datoDos el segundo operando introducido.
 * \param flagResultado valida a traves de un flag si los datos fueron ingresados correctamente.
 * \return int 0 en caso de que se haya podido efectuar la cuenta y 1 en caso de que no.
 *
 */
int suma(float datoUno,float datoDos, float flagResultado)//suma los dos numeros
{
    int flag=-1;
    float sumaResultado;
    if(flagResultado == -1)
    {
        printf("\n error, re ingrese los datos: ");
        flag = -1;
    }
    else
    {
    sumaResultado=datoUno+datoDos;
    printf("\n---------------------------\n la suma de %.2f y %.2f es: %.2f\n",datoUno,datoDos,sumaResultado);
    flag=0;
    }

    return flag;
}


/** \brief realiza la resta entre ambos operando.
 *
 * \param datoUno el primer operando.
 * \param datoDos el segundo operando introducido.
 * \param flagResultado valida a traves de un flag si los datos fueron ingresados correctamente.
 * \return int 0 en caso de que se haya podido efectuar la cuenta y 1 en caso de que no.
 *
 */
int resta(float resta1,float resta2, float flagResultado)//resta los dos numeros
{
    int flag=-1;
    float restaResultado;
    if(flagResultado == -1)
    {
        printf("\nerror, re ingrese los datos\n");
        flag = -1;
    }
    else
    {
    restaResultado=resta1-resta2;
    printf("\n la resta de %.2f y %.2f es: %.2f\n",resta1,resta2,restaResultado);
    flag=0;
    }

    return flag;
}

/** \brief realiza la division del primer operando por el segundo operando
 *
 * \param division1 float el primer operando.
 * \param division2 float el segundo operando.
 * \param flagResultado float valida a traves de un flag si los datos fueron ingresados correctamente
                              ya que no se puede dividir por 0.
 * \return int el flag en 0 si se efectuo la operacion con exito y -1 si fallo
 *
 */
int division(float division1, float division2, float flagResultado)//divide los dos numeros.
{
    int flag=-1;
    float divisionResultado;
    if(flagResultado == -1 || division2 <= 0)
    {
        printf("\n no se puede dividir por 0 \n");
        flag = -1;
    }
    else
    {
    divisionResultado=division1/division2;
    printf("\n la division de %.2f y %.2f es: %.2f\n",division1,division2,divisionResultado);
    flag=0;
    }
    return flag;

}

/** \brief multiplica ambos operandos.
 *
 * \param multiplo1 float primer operando.
 * \param multiplo2 float segundo operando.
 * \param flagResultado float valida la operacion.
 * \return int flag en 0 si se realizo la operacion con exito y -1 si fallo.
 *
 */
int multiplicacion(float multiplo1, float multiplo2,float flagResultado)//multiplica los dos numeros.
{
    int flag=-1;
    float multiplicacionResultado;
    if(flagResultado == -1)
    {
        flag=-1;
    }
    else
{
    multiplicacionResultado=multiplo1*multiplo2;
    printf("\n la multiplicacion de %.2f y %.2f es: %.2f\n",multiplo1,multiplo2,multiplicacionResultado);
    flag =0;
    }
    return flag;
}


/** \brief realiza la factorizacion del primer operando.
 *
 * \param factorizarUno float el primer operando.
 * \param flagResultado float valida si el numero ingresado no es negativo.
 * \return int flag en 0 si la operacion fue exitosa y -1 si fallo.
 *
 */
int factorizar(float factorizarUno,float flagResultado)//factoriza el primer numero.
{
    int flag=-1;
    int i;
    float localResultado=factorizarUno;
    if(factorizarUno < 0 || flagResultado==-1)
    {
        printf("\n no se pueden factorizar numeros negativos \n");
        flag =-1;
    }
    else
    {
        for(i = factorizarUno - 1; i>0; i--)
        {
            localResultado=localResultado*i;
            flag = 0;
        }
        printf("\n la factorizacion de %.2f es :%.2f\n---------------------------\n",factorizarUno,localResultado);
    }
    return flag;
}
