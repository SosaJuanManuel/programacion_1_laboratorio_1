#ifndef VALIDACIONES_C_INCLUDED
#define VALIDACIONES_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"
#define TRUE 1
#define FALSE 0

int isValidInt(int numero, int minimo, int maximo)
{
    if(numero >= minimo && numero <= maximo)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isValidFloat(float numero, float minimo, float maximo)
{
    if(numero >= minimo && numero <= maximo)
    {
        return 1;
    }
    return 0;
}

int isValidChar(char letra, char minimo, char maximo)
{
    if(letra>=minimo && letra <= maximo)
    {
        return TRUE;
    }
    return FALSE;
}

int isValidName (char* cadena)
{
    int retorno = TRUE;
    int i;
    for( i=0 ; cadena[i] != '\0'  ; i++)
    {
        if((cadena[i] > 'Z' || cadena[i] < 'A') && (cadena[i] > 'z' || cadena[i] < 'a'))
        {
            retorno = FALSE;
            break;
        }
    }
    return retorno;
}

int isValidApellido (char* cadena)
{
    int retorno = TRUE;
    int i;
    for( i=0 ; cadena[i] != '\0'  ; i++)
    {
        if((cadena[i] > 'Z' || cadena[i] < 'A') && (cadena[i] > 'z' || cadena[i] < 'a'))
        {
            retorno = FALSE;
            break;
        }
    }
    return retorno;
}

int isValidDni(char* cadena)
{
    int retorno=1;
    int i;
    int contadorPunto=0;
    for(i=0; cadena[i]!='\0'; i++)
    {
        if((cadena[i]<'0' || cadena[i]>'9') && (cadena[i]!='.'))
        {
            retorno=0;
        }
        if (cadena[i]=='.')
        {
            contadorPunto++;
        }
        if(contadorPunto>2)
        {
            retorno=FALSE;
        }
        if ((cadena[1]=='.' && cadena[5]=='.') || (cadena[2]=='.' && cadena[6]=='.'))
        {
            retorno=1;
        }
    }
    return retorno;
}

int isNumber (char* pString)
{
    int i=0;
    while(pString[i]!='\0')
    {
        if(pString[i]<'0' || pString[i]>'9')
        {
            return FALSE;
        }
        i++;
    }
    return TRUE;
}

int isValidNumber(char* stringRecibido)
{
    int retorno=1;
    int i;
    for(i=0; stringRecibido[i]!='\0'; i++)
    {
        if(stringRecibido[i]<'0' || stringRecibido[i]>'9')
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}

int isCuit (char* pString)
{
    int retorno=FALSE;
    int i=0;
    while(pString[i]!='\0')
    {
        if((pString[i]!='-')&&(pString[i]<'0' || pString[i]>'9'))
        {
            return FALSE;
        }
        else if((pString[2]=='-')&&(pString[10]=='-' || pString[11]=='-'))
        {
            retorno=TRUE;
        }
        i++;
    }
    return retorno;
}

int isTelefono (char* pString)
{
    int i=0;
    int contadorGuion=0;
    while(pString[i]!='\0')
    {
        if((pString[i]!=' ')&&(pString[i]!='-')&&(pString[i]<'0' || pString[i]>'9'))
        {
            return FALSE;
        }
        if(pString[i]=='-')
        {
            contadorGuion++;
        }
        i++;
    }
    if(contadorGuion==1)
    {
        return TRUE;
    }
    return FALSE;
}

int isValidEmail(char* cadena)
{
    int contador=0;
    int retorno=1;
    int i;
    for(i=0; cadena[i]!='\0'; i++)
    {
        if((cadena[i]<'-' && cadena[i]!='+') || (cadena[i]>'9' && cadena[i]<'@') ||
                (cadena[i]>'Z' && cadena[i]!='_' && cadena[i]<'a')|| cadena[i]>'z')
        {
            retorno=0;
            break;
        }

        if (cadena[i]=='@')
        {
            contador++;
        }
    }

    if (contador==0 || contador>1)
    {
        retorno=0;
    }
    return retorno;
}

int isValidSex(char letra, char maximo, char minimo)
{
    int retorno = TRUE;

    if((letra != 'f') && (letra != 'F') && (letra != 'm') && (letra != 'M'))
    {
        retorno = FALSE;
    }
    return retorno;
}


int isValidAlphanumeric(char* cadena)
{
    int retorno=TRUE;
    int i;
    for(i=0; cadena[i]!='\0'; i++)
    {
        if(cadena[i]<'0' || (cadena[i]>'9' && cadena[i]<'A') || (cadena[i]>'Z' && cadena[i]<'a') || cadena[i]>'z' )
        {
            retorno=FALSE;
            break;
        }
    }
    return retorno;
}

int isValidFecha(char *cadena)
{
    int retorno=TRUE;
    int i;
    for(i=0; cadena[i]!='\0'; i++)
    {
        if((cadena[i]<'0' || cadena[i]>'9') && (cadena[i]!= '-' ))
        {
            retorno=FALSE;
        }
    }
    return retorno;
}

#endif // VALIDACIONES_C_INCLUDED
