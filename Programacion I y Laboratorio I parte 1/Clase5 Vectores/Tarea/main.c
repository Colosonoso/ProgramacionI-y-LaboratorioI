#include <stdio.h>
#include <stdlib.h>


int contarPares(int[], int);

/** \brief Determina si un caracter esta o no esta dentro
 *
 * \param int[] colección de caracteres
 * \param int tanmaño de la colección
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice del
 *
 */
int buscarChar(char[], int, char);


int main()
{
    int vector[5]={5,2,9,6,5};
    char letras[5] = { 'f', 'g' , 'i', 'm', 'q'};
    int indexLetra;
    int cantidad;


    cantidad= contarPares(vector, 5);

    indexLetra= buscarChar(letras,5, 'a');
    if(indexLetra== -1)
    {
        printf("No se encuentra el caracter!!!");
    }
    else
    {
      printf("El caracter se encuentra en el array");
    }


    printf("\nCantidad de pares : %d ", cantidad);
    return 0;
}


int contarPares(int array[], int cantidad) /* el array y la cantidad dirección de memoria*/
{
    int contPares=0;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(array[i] %2 ==0)
        {
            contPares++;
        }
    }




   return contPares;
}

int buscarChar(char array[], int cantidad, char caracter)
{
    int index= -1;
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index=i;
            break;
        }
    }

    return index;

}
