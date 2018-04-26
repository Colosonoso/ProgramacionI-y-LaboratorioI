#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVector(int[], int);


int main()
{

    int vector[TAM];
    int i;

  int edad;

    for(i=0; i<TAM; i++)
    {
      vector[i] =0;
    }
    /*Carga Secuencial*/
    for(i=0; i<TAM; i++)
    {
     printf("Ingrese un numero: ");
     scanf("%d", vector[i]);
    }

 mostrarVector(vector, TAM);
    /*Mostrar el vector*/

    return 0;
}
    void mostrarVector(int vec[], int tamanio)
    {
     int i;
      for(i=0; i< tamanio; i++)
    {
     printf("%d -- %d\n", i, &vec[i]);
    }
    }
