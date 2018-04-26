#include <stdio.h>
#include <stdlib.h>
//con los corchetes van los vectores siempre
//Apunta a un punto esencial de la memoria, representa elementos y cada uno de los elementos tiene una memoria


int main()
{



    int vector[5];
    int i;

    printf("Vector %d\n", vector);

    for(i=0; i<5; i++)
    {
     printf("%d" -- "%d\n", i, &vector(i));
    }


    return 0;
}
