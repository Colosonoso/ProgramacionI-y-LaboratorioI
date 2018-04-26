#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula la factorial
 *
 * \param Recibe un numero
 * \return Devuelve el numero como factorial
 *
 */

/* Printf("El factorial es : %d", factor);*/
int factorial(int);

int main()
{
    int numero=0;
    int factor;
    printf("Ingrese un numero: ");
    scanf("%d" , &numero);

    factor=factorial(numero);
    printf("El numero es: %d" , factor);
    return 0;
}
int factorial(int numero)
{
    int respuesta;
    if(numero==0)
    {
        respuesta= 1;
    }
    else
    {
        respuesta= numero * factorial(numero -1);
    }
    return respuesta;

}


// Trabajo Practico Nº1 Con documentación
