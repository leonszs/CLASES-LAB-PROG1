#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMNAS 20

int main()
{
    char letra = 'a';
   char nombre[20]= "Juan";  // vector
   char auxCad [20];
   char nombres [FILAS] [COLUMNAS] = {"Zoilo" , "Hernan" , "Andrea" } ;   // MATRIZ  primer corchete: FILAS  segundo corchete: CANTIDAD DE 2DA FILA






//VARIABLES ESCALARES
 /* printf("%c\n", letra);
  printf("%c\n" , nombre[1]);
 printf("%c\n", nombres [3][3] );


 //VECTORES


 printf("%s\n", nombre );                              // PARA MOSTRAR TODO EL VECTOR
 printf("%s\n" , nombres [2]);  // DE UNA MATRIZ
*/

  /* for (int i = 0;i<FILAS; i++ )
   {

       printf("ingrese nombre: ");
       fflush(stdin);
       gets(nombres[i]);
   } */



for (int i = 0 ; i<FILAS -1 ; i++)
{
    for (int j = i+1 ; j<FILAS ; j++)
    {
        if (strcmp(nombres [i] , nombres [j])>0)  // EL <>0 PARA MODIFICIAR ORDENAR ALFABETICAMENTE
        {
            strcpy (auxCad , nombres [i]);
            strcpy (nombres [i] , nombres [j]);
           strcpy (nombres [j], auxCad);

        }
    }


}

   for (int i = 0; i<5 ; i++)
   {
       printf("%s\n" , nombres[i]);
   }


      // PARA MOSTRAR UNA MATRIZ
    return 0;
}
