#ifndef VALIDACIONES_C_INCLUDED
#define VALIDACIONES_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "validaciones.h"

int isValidInt(int numero, int minimo, int maximo)
{
    if(numero >= minimo && numero <= maximo)
    {
        return 1;
    }else
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
        return 1;
    }
    return 0;
}

int isValidName (char* cadena)
{
    int retorno = 1;
    int i;
    for( i=0 ; cadena[i] != '\0'  ; i++)
    {
        if((cadena[i] > 'Z' || cadena[i] < 'A') && (cadena[i] > 'z' || cadena[i] < 'a'))
        {
            retorno = 0;
            break;
        }
    }
    return retorno;
}

int isValidApellido (char* cadena)
{
    int retorno = 1;
    int i;
    for( i=0 ; cadena[i] != '\0'  ; i++)
    {
        if((cadena[i] > 'Z' || cadena[i] < 'A') && (cadena[i] > 'z' || cadena[i] < 'a'))
        {
            retorno = 0;
            break;
        }
    }
    return retorno;
}

int isDni (char* pString)
{
    int i=0;
    while(pString[i]!='\0')
    {
        if(!isNumber(pString))
        {
            return 0;
        }
        if(strlen(pString)<7 || strlen(pString)>8)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int isNumber (char* pString)
{
    int i=0;
    while(pString[i]!='\0')
    {
        if(pString[i]<'0' || pString[i]>'9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int isValidNumber(char* stringRecibido)
{
    int retorno=1;
    int i;
    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if((stringRecibido[i]<'0' || stringRecibido[i]>'9'))
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}

/*int isCuit (char* pString)
{
    int retorno=0;
    int i=0;
    while(pString[i]!='\0')
    {
        if((pString[i]!='-')&&(pString[i]<'0' || pString[i]>'9'))
        {
            return 0;
        }
        else if((pString[2]=='-')&&(pString[10]=='-' || pString[11]=='-'))
        {
            retorno=1;
        }
        i++;
    }
    return retorno;
}*/

int isTelefono (char* pString)
{
    int i=0;
    int contadorGuion=0;
    while(pString[i]!='\0')
    {
        if((pString[i]!=' ')&&(pString[i]!='-')&&(pString[i]<'0' || pString[i]>'9'))
        {
            return 0;
        }
        if(pString[i]=='-')
        {
            contadorGuion++;
        }
        i++;
    }
    if(contadorGuion==1)
        {
            return 1;
        }
    return 0;
}

int isEmail(char* cadena)
{
    int retorno=0;
    int contadorArroba=0;
    int i;
    for (i=0;i<30;i++)
    {
       while (cadena[i]!='\0')
        {
            if ((cadena[i]=='-')&&(cadena[i]=='_')&& (cadena[i]=='.')
                && (cadena[i]>='0' || cadena[i]<='9') && (cadena[i]<'A'||cadena[i]>'Z') &&
                (cadena[i]<'a' || cadena[i]>'z') && (cadena[i]=='@'))
            {
                retorno=0;
            }
            if(cadena[i]=='@')
            {
                contadorArroba++;
            }
            if(contadorArroba>1)
            {
                retorno=1;
            }
        }
    }

    return retorno;
}

int isValidSex(char letra, char maximo, char minimo)
{
    int retorno = 1;

    if((letra != 'f') && (letra != 'F') && (letra != 'm') && (letra != 'M'))
    {
        retorno = 0;
    }
    return retorno;
}


int isValidEmail(char* cadena)
{
    int retorno=1;  // para las funciones isValid arranco con verdadero y cambio cuando encuentro un error
    int i;
    for(i=0;cadena[i]!='\0';i++)
    {
        if((cadena[i]<'-' && cadena[i]!='+') || (cadena[i]>'9' && cadena[i]<'@') ||
           (cadena[i]>'Z' && cadena[i]!='_' && cadena[i]<'a')|| cadena[i]>'z')
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}
/*
int isValidEmail(char* cadena)
{
    int retorno=1;  // para las funciones isValid arranco con verdadero y cambio cuando encuentro un error
    int i;
    int contadorArroba=0;
    for(i=0;cadena[i]!='\0';i++)
    {
        if (cadena[i]=='@')
        {
            contadorArroba++;
            if (contadorArroba<=1 && cadena[i]=='_' && cadena[i]=='-' && cadena[i]=='.' &&
                (cadena[i]>=0 || cadena[i]<=9) && (cadena[i]>'Z' || cadena[i]<'A') &&
                (cadena[i]>'z' || cadena[i]<'a'))
            {
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}*/

int isValidAlphanumeric(char* stringRecibido)
{
    int retorno=1;  // para las funciones isValid arranco con verdadero y cambio cuando encuentro un error
    int i;
    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if(stringRecibido[i]<'0' || (stringRecibido[i]>'9' && stringRecibido[i]<'A') || (stringRecibido[i]>'Z' && stringRecibido[i]<'a') || stringRecibido[i]>'z' )
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}

int isValidCUIT(char* stringRecibido)
{
    int retorno=1;  // para las funciones isValid arranco con verdadero y cambio cuando encuentro un error
    int i;
    int j;
    char buffer[14];
    strncpy(buffer,stringRecibido,14);

    for(i=0;buffer[i]!='\0';i++)
    {
        if((buffer[i]<'0' || buffer[i]>'9') && (buffer[i]!='-')) // chequeo que solo sean numeros o -
        {
            retorno=0;
            break;
        }

        if(buffer[i]=='-')  //elimino los -
        {
            for(j=i;buffer[j]!='\0';j++)
            {
                strncpy(&buffer[j],&buffer[j+1],1);
            }
        }
    }

    int digitos[10]={2,3,4,5,6,7,2,3,4,5};
    int acumulado = 0;
    int verificador;

    for(i=0;i < strlen(buffer-1); i++)
    {
        acumulado+=buffer[i]*digitos[i];
    }

    verificador=11-(acumulado%11);
	if(verificador == 11)
	{
		verificador = 0;
	}

	if(buffer[11]!=verificador)
    {
        retorno=0;
    }

    //if(stringRecibido[2]!='-' || stringRecibido[11]!='-' || stringRecibido[0]!='2' || stringRecibido[1]!='0' || stringRecibido[1]!='3' || stringRecibido[1]!='4' || stringRecibido[1]!='7')
    return retorno;
}


#endif // VALIDACIONES_C_INCLUDED
