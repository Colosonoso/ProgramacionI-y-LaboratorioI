#include <stdio.h>
#include <stdlib.h>
#include "Reyes Ezequiel.h"
int main()
{
    float numerouno;
    float numerodos;
    float sumar;
    float restar;
    float multiplicar;
    float dividir;
    int factorialnumerouno;
    int factorialnumerodos;
    int opcion=0;
    char seguir='s';
    float resultado;



    while(seguir=='s')
    {

      printf("1-Ingrese el primer operando\n");
      printf("2-Ingrese el segundo operando\n");
      printf("3-Calcular la suma de ambos numeros\n");
      printf("4-Calcular la resta de ambos numeros\n");
      printf("5-Calcular la multiplicacion de ambos numeros\n");
      printf("6-Calcular la division de ambos numeros\n");
      printf("7-Calcular el factorial junto con los dos numeros\n");
      printf("8-Salir\n");
      scanf("%d", &opcion);

      switch(opcion)
      {
      case 1:
      printf(" Ingrese el primer operando ");
      scanf("%f", &numerouno);
      system("pause");
      break;

      case 2:
      printf(" Ingrese el segundo operando ");
      scanf("%f", &numerodos);
      system("pause");
      break;


      case 3:
      sumar=suma(numerouno,numerodos);
      restar=resta(numerouno,numerodos);
      multiplicar=multiplicacion(numerouno,numerodos);
      dividir=division(numerouno,numerodos);
      system("pause");

      printf("Calculando la operacion");

      break;


      case 8:
      seguir= 'n';
      break;
      }


     }
     return 0;
}

