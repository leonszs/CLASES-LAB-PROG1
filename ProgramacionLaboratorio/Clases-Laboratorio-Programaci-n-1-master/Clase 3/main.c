#include <stdio.h>
#include <stdlib.h>



int sumarNumeros (int a , int b );

int main ()

{
   int numero1;
   int numero2;
   int total;

   printf("\ningrese el primer numero:  ");
   fflush(stdin);
   scanf("%d " , &numero1);

   printf("\n ingrese el segundo numero: ");
   fflush(stdin);
   scanf("%d  " , &numero2);

    total = sumarNumeros( numero1 , numero2);
    printf("la suma es %d " , total);

    return 0;


  }
  int sumarNumeros(int a, int b )

  {
      int resultado;
      resultado = a+b;

      return resultado;
  }
  // no hace falta usar ; en la segunda vez que lo declaras, por eso no se usa "main".













