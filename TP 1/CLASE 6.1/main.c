#include <stdio.h>
#include <stdlib.h>
//  #define TAM 5  // variable global para editar el vector

void mostrarVector (int x [ ], int tam);

int main()
{
   int vector  [ 5];
   int mayor;
  // int posMayor;
   int flag = 0;
   int acumulador = 0;
   float promedio;
  int numeroBuscado;

  int contBusqueda = 0;

   // UTILIZO UN FOR PARA CARGAR UN VECTOR DE MANERA SECUENCIAL
   for (int i = 0 ; i<5 ; i++)
   {
        printf("ingrese un numero:  \n ");
        scanf("%d", &vector [ i]);               // CARGAR NUMEROS
   }

 // UTILIZO OTRO FOR PARA RECORRER EL ARRAY DE PRINCIPIO A FIN Y MOSTRARLO

   printf(" muestro el vector como fue ingresado: \n\n ");


  mostrarVector(vector,5);  // EN LA LLAMADA A UN VECTOR NO HACE FALTA PONER CORCHETES

   // UTILIZO OTRO FOR PARA RECORRER EL FOR DESDE EL FIN AL PRINCIPIO





 printf("muestro el for al reves de como fue ingresado:  \n\n ");
   for ( int i = 4; i>=0 ; i--)
   {
       printf("%d  ", vector [ i]);   // MUESTRO NUMEROS DE ATRAS PARA ADELANTE

   }


   for (int i = 0; i <5 ; i++)
   {

       if (vector  [ i] > mayor || flag == 0)
       {
           mayor = vector [ i];             // EL MAYOR NUMERO INGRESADO
          // posMayor = i+1;          // LA POSICION DONDE ESTA EL NUMERO MAYOR EN EL VECTOR

           flag = 1;
       }

   }

   printf("\n\n  el mayor numero ingresado es: %d y fue ingresado en las posiciones:   \n ", mayor );




   for (int i = 0; i<5; i++)

   {
      if (vector [ i] == mayor)                           // RECORRER UN ARRAY PARA UNA BUSQUEDA
      {
          printf("%d ", i+1);
      }
   }

  for (int i = 0; i<5; i++)
  {
     acumulador = acumulador + vector [ i];



                                                  // PROMEDIO DE TODO LOS NUMEROS INGRESADOS


  }
  promedio = (float) acumulador / 5;



   printf("el promedio de los numeros ingresados es: %.2f \n\n ", promedio);





printf("ingrese numero a buscar: ");
scanf("%d", &numeroBuscado);

for (int i = 0; i<5  ; i++)
{
    if (vector[ i]== numeroBuscado)
    {
        contBusqueda++;

    }


}


      printf("el numero esta %d veces cargado \n\n ",contBusqueda);









 return 0;
 }








void mostrarVector(int x [ ] , int tam)

{

   for (int i = 0; i<tam ; i++)
   {
       printf("%d  ", x[i ]);


   }
   printf("\n \n");

}



