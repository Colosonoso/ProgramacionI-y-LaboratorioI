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

      printf("1- Ingrese el primer operando\n");
      printf("2- Ingrese el segundo operando\n");
      printf("3- Calcular las operaciones\n");
      printf("a. Calcular la suma de ambos numeros\n");
      printf("b. Calcular la resta de ambos numeros\n");
      printf("c. Calcular la division de ambos numeros\n");
      printf("d. Calcular la multiplicacion de ambos numeros\n");
      printf("4- Los resultados son: \n");
      printf("a. el resultado de la suma es :\n");
      printf("b. el resultado de la resta es :\n");
      printf("c. el resultado de la division es: \n");
      printf("d. el resultado de la multiplicacion es :\n");
      printf("e. el resultado del factorial es :\n");
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

      case 4:

      printf("La suma con el numerouno y el numeroDos es %f", numerouno,numerodos,suma);
      printf("La resta con el numerouno y el numeroDos es %f", numerouno,numerodos,resta);
      printf("La division con el numerouno y el numeroDos es %f", numerouno,numerodos,division);
      printf("La multiplicacion con el numerouno y el numeroDos es %f", numerouno,numerodos,multiplicacion);
      case 8:
      seguir= 'n';
      break;
      }


     }
     return 0;
}

