#include <stdio.h>
#include <stdlib.h>
// cualquier dato primitivo se hace un pasaje de parametros por valor



/*Declaracion de la funcion - prototipo de la funci�n

tipo_de_dato_devuelto identificador ([parametros de entrada]) ;

tipo_de_dato_devuelto
(int, float, char, void, double, long)

identificador

nombre representativo: verbo + objeto

parametros de entrada

declaro una variable por cada parametro (Mismas reglas de declaraci�n)
*/


/*************************************/


int mostrarEincrementar(int);

int main()
{

    int numero;
    int incremento;

    printf("Ingrese un numero: ");
    scanf("%d" , &numero);

    // llamada de la funci�n
    incremento= mostrarEincrementar(numero); //parametro actual

    printf("\nEl numero incrementado es : %d " , incremento);

    return 0;
}
// Implementaci�n o desarrollo de la funci�n

 int mostrarEincrementar(int numero)       /* parametro formal*/
{
  int returno;

  printf("El numero ingresado es : %d", numero);

    returno= numero + 10;

  return returno;

}

