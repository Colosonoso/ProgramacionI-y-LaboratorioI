#include <stdio.h>
#include <stdlib.h>

//Recursiva: Una función que se llama a sí misma. Una funcion factorial para numero

/** el factorial de 5=120 se realiza el código*/

int main()
{
   int numero=6;
   int i;
   int factor=1;


    for(i=numero; i >=1; i--)
    {

    factor= factor * i;



    }



    printf("El factorial es : %d" , factor);


    return 0;

}
