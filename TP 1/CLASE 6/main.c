#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [5 ]= {};                          // RESERVA DE MEMORIA DE 5 ELEMENTOS

    // ACCESO ALEATORIO
    //printf("%d\n", numeros [ 2]);                       // SE MUESTRA EL ELEMENTO 5 POR EL INDICE 2


   // numeros  [ 4] = 10 ;
    //numeros  [ 2] = 5;



    //ACCESO SECUENCIAL

    for (int i = 0; i<5 ; i++)
    {
        printf("ingrese un numero: \n");   // RECORRER Y CARGAR
        scanf("%d", &numeros [ i]);
    }


    for (int i = 0 ; i<5 ; i++)                                                                // 0, 1, 2 , 3, 4            // SECUENCIAL SIEMPRE CON ESTRUCTURA REPETITIVA FOR

    {
        printf("%d ", numeros  [ i]);     // RECORRER Y MOSTRAR EL ANTERIOR FOR                    // ASI SE RECORRE UN VECTOR
    }

       printf("\n\n");

 // MUESTRA LOS 5 NUMEROS CARGADOS!!


    return 0;
}
