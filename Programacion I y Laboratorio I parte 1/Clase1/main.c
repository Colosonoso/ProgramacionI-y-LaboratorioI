#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*int (%d) 7
     float(%f) 7.25
     char(%c) */

    int numero1;
    float numero2;
    float suma;
    char letra;


    printf(" Ingrese un numero ");
    scanf("%d" , &numero1);
    printf(" Ingrese un numero decimal ");
    scanf("%f" , &numero2);
    printf(" Ingrese una letra ");
    letra = getch();



    suma= numero1 + numero2;

    printf("\nEl numero es : %d y el numero flotante es: %.2f" , numero1, numero2);
    printf("\nLasuma es: %2.f" , suma);
    printf("\nLa letra es: %c" , letra);
    return 0;
}
