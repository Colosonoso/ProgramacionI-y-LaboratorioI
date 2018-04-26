#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char[], int , int );      //char[]: (conjunto de elementos vector)

int validarEntero(int , int , int , char mensaje[]);

int main()
{
  int edad; //18-60
  int legajo;//1-1000
  int nota;//1-10

  edad= pedirEntero("Ingrese Edad" , 18 , 60);
  legajo= pedirEntero("Ingrese legajo" , 1 , 1000);
  nota= pedirEntero("Ingrese nota" , 1 , 10);

  printf("La edad es : %d , el legajo es : %d y la nota es %d" , edad , legajo, nota);

  return 0;
}

int pedirEntero(char mensaje[] , int min, int max) // Se copia "ingrese edad" "Ingrese legajo" "ingrese nota" en mensaje
{
   int numero;

   printf("Ingrese %s" , mensaje);
   scanf("%d" , &numero);

   numero= validarEntero(numero, min, max, mensaje);

   return numero;
}

int validarEntero(int dato , int min , int max , char mensaje[]);
{
    while(dato < min || dato > max)
    {
        printf("Error Reingrese %s" , mensaje);
        scanf("%d", &dato);
    }

        return dato;
}
