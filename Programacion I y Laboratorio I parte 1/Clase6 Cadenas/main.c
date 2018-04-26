#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palabra1[15];
    char palabra2[15];
    char buffer[1024];
    int i;
    int cant;
    int comp;

    printf("Ingrese una palabra :");

    fflush(stdin);

    gets(buffer);  //Para leer string mas de 1 palabra usar Gets

    while(strlen(buffer)>14)
    {
     printf("Reingrese una palabra");
     fflush(stdin);
     gets(buffer);
    }

    cant= strlen(palabra1);

    /*strcpy("destino ", " origen" ); copia una cadena en otra con STRCPY */

    //Tarea: Char nombre, char apellido, char ApellidoyNombre y definimos la cantidad de caracteres

    strcpy(buffer,palabra1);
    strcpy(buffer,palabra2);

    strupr(palabra1);
    strlwr(palabra2);

    strcat(buffer,palabra2);

    comp=strcmp(palabra1, palabra2);



    printf("\nResultado de la comparacion es %d : ", comp);

    printf("Palabra1: %s\nPalabra2 : %s" , palabra1, palabra2);





    return 0;
}

