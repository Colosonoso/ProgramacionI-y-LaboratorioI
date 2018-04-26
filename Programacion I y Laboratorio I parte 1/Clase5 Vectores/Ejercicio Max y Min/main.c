#include <stdio.h>
#include <stdlib.h>
#define TAM5
//tiene que estar todo documentado en funciones.h
/* Tarea funcion que devuelva cantidad pares, una funcion que devuelva la cantidad de numeros positivos
 y en vez de buscarValor se va a llamar buscarChar y va a recibir un array de char de TAM vector y un Char que vamos a tener que buscar
y que me diga si tiene el char ingresado o no*/

int vector[TAM]= { 5,6,7,1,3);
int i;
int edad;
int mayor;

cargarVector (vector,TAM);
mostrarVector(vector,TAM);

mayor= buscarMaximo(vector,TAM);
printf("\nEl maximo es %d ", mayor);

void mostrarVector(int[], int);
void modificarValor(int[]);
int buscarMaximo(int[], int);

int main()
{



void modificarValor(int vec[])
{
    vec[3] =789;
}

int buscarMaximo(int vec[], int tam)
{
    int maximo;
    int i;
    for(i=0; i<tam, i++)
    {
    if(vec[i]> maximo)
    {
      maximo= vec[i];
      flag=1;
    }


    }
}
}
return 0;
