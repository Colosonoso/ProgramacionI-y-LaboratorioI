#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* hay que ingresar numeros(distinto de cero) pero no se sabe cuantos.
    Se pide mostrar:
    1- Cantidad de pares e impares.
    2- Porcentaje de numeros positivos y negativos.
    3- Máximo y Mínimo.
    4- Máximo numero par.
    5- Cantidad de numeros comprendidos entre 125 y 236.*/

    int numero;
    int cantidaddepares=0;
    int cantidaddeimpares=0;
    int ContadorNumeros;
    float PorcentajePos;
    float PorcentajeNeg;
    int numeroMin;
    int numeroMax;
    int MaxPar;
    int flagPar=0;
    int flag=0;
    char respuesta= 's';
    int ContadorPos=0;
    int ContadorNeg=0;

    while(respuesta!= 'n')
{


    printf("\nIngrese un numero");

    scanf("%d" , &numero);


    while(numero==0)
    {


    printf("\nReingrese un numero ");
    scanf("%d" , &numero);


    }


    if(numero %2==0)
    {
      if(cantidaddepares==0 || numero > MaxPar)
      {
       MaxPar= numero;
      }

       cantidaddepares++;

    }

    else
    {
    cantidaddeimpares ++;

    }

    if(numero >0)
    {
    ContadorPos++;
    ContadorPos+=numero;
    }
    else
    {
    ContadorNeg++;
    ContadorNeg=+numero;
    }

    if(numero > numeroMax || flag==0)
    {
    numeroMax=numero;
    }
    if(numero < numeroMin || flag==0)
    {
    numeroMin=numero;
    flag=1;
    }

    if(numero < 125 && numero <236)
    {
    printf("Error. Tiene que ser mayor a 125 y menor a 236. Reingrese");
    }



    printf("\nDesea continuar? ");
    respuesta=getche();


}

    ContadorNumeros= ContadorPos + ContadorNeg;
    PorcentajePos=(float) (ContadorPos*100) / ContadorNumeros;
    PorcentajeNeg= 100 - PorcentajePos;



    printf("\nla cantidad de pares es : %d" , cantidaddepares);
    printf("\nla cantidad de impares es : %d" , cantidaddeimpares);
    printf("\nEl numero maximo es : %d" , numeroMax);
    printf("\nEl numero minimo es : %d" , numeroMin);
    printf("\nEl porcentaje de positivos es : %2.f " , PorcentajePos);
    printf("\nEl porcentaje de negativos es : %2.f " , PorcentajeNeg);
    printf("\nEl par máximo es : %d" , MaxPar);

    return 0;

}
