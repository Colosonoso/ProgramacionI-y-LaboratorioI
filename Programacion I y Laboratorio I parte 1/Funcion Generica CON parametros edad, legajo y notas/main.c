#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int edad;//18-60
    int legajo;//1-1000
    int nota;//1-10

    edad= pedirEntero("Edad: " , 18 , 60);
    legajo = pedirEntero("Ingrese un legajo: " , 1 , 1000);
    nota = pedirEntero("Ingrese nota : " , 1 , 10);

    printf("La edad es : %d , el legajo es: %d y la nota es : %d" , edad , legajo , nota);


    return 0;

}

//Funcion Generica
