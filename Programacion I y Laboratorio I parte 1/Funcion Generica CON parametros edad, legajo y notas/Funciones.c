#include <stdio.h>
#include "Funciones.h"

int pedirEntero(char mensaje[] , int min , int max)//se "copia" "Ingrese edad" "ingrese legajo" en mensaje
{
    int numero;

    printf(" Ingrese %s", mensaje);
    scanf("%d" , &numero);

    numero = validarEntero(numero , min , max , mensaje);

    return numero;
}

int validarEntero(int dato , int min , int max , char mensaje[])
{
    while(dato < min || dato > max)
    {
        printf("Error Reingrese: %s" , mensaje);
        scanf("%d" , &dato);
    }
    return dato;
}
