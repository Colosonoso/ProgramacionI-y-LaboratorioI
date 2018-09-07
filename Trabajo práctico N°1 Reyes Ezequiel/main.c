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
    int flagnumero1=1;
    int flagnumero2=1;
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
      printf("5-Salir");
      scanf("%d", &opcion);

      switch(opcion)
      {
      case 1:
      printf(" Ingrese el primer operando ");
      scanf("%f", &numerouno);
      flagnumero1=1;
      system("pause");
      break;

      case 2:
      printf(" Ingrese el segundo operando ");
      scanf("%f", &numerodos);
      flagnumero2=1;
      system("pause");
      break;


      case 3:

      if(flagnumero1==1 && flagnumero2==1)
      {

      sumar=suma(numerouno,numerodos);
      restar=resta(numerouno,numerodos);
      multiplicar=multiplicacion(numerouno,numerodos);
      dividir=division(numerouno,numerodos);
      system("pause");

      printf("Calculando la operacion\n");
     }

      else
        {
          printf("Error. Se ha ingresado algo que no es un numero, debe ingresar un numero");
        }
        break;

      case 4:


      case 5:
      seguir= 'n';
      break;
      }


     }
     return 0;
}

