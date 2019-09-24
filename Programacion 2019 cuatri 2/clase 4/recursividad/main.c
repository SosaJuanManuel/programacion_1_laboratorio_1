/*#include <stdio.h>//metodo con recursividad
#include <stdlib.h>

int factorial(int);
int main()
{
    int valor, result;
    printf("ingrese numero");
    scanf("%d",&valor);

    result=factorial(valor);

    printf("El factorial de %d es %d", valor, result );
    return 0;
}

int factorial(int n){
    int resp;
    if(n==1){
        resp=1;
    }
    resp=n*factorial(n-1);
    return resp;
}
*/
#include <stdio.h>//manera sin recursividad
#include <stdlib.h>
int factorial(int);
int main(void){
    int valor,res;

    printf("ingrese valor");
    scanf("%d",&valor);
    res=factorial(valor);
    printf("El factorial de %d es %d",valor, res);
    return 0;
}
int factorial(int valor){
    /*int i,fact=1;
    for(i=1;i<=valor;i++){
        fact=fact*i;
    }*/ //de menos a mayo con for
    int i=valor, fact=1;

    while(i>0){
        fact*=i;
        i--;
    }//de mayor a menor con while
    return fact;
}
