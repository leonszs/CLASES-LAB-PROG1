#include <stdio.h>
#include <stdlib.h>
 /** \brief busca  un entero  dentro de un array de enteros
  *
  * \param numero es el valor a buscar
  * \param  es el vector donde se realiza la busqueda
    \param tamaño del vector
  * \return el indice del elemento donde se encuentra el numero o -1 si no esta
  *
  */

int buscarNumero (int numero , int x [ ] , int tam );
int obtnerMayor (int x [ ], int tam);
int obtenerMenor (int x [ ], int tam);
int obtenerMaxMin (int x [ ] , int  tam, int modo);   // PARA OBTENER LAS ANTERIORES 2 EN UNA FUNCION


float calcularPromedio (int x [ ], int tam);


int main()
{
    int numero [ ] = {5,2,3,8,9};
    printf("%d\n\n" , buscarNumero(6,numero,5));
    printf("%d\n\n" , buscarNumero(9,numero,5));
    printf("El mayor es %d \n", obtnerMayor(numero, 5));
    printf("El menor es: %d \n", obtenerMenor(numero,5));
    printf("El promedio es: %.2f\n ", calcularPromedio(numero,5));


return 0;

    int numeros[ ] = {3,2,6,5,8};
           // printf("%d\n\n", buscarNumero(6,numeros,5));  // DEVUELVE SI ESTA  2   // DEL A FUNCION BUSCAR NUMERO
            // printf("%d\n\n", buscarNumero(9,numeros,5)); // DEVUELVE SI NO ESTA -1
           // printf("el mayor es: %d\n ", obtnerMayor(numeros,5));
           // printf("el menor es : %d\n", obtenerMenor(numeros,5));
            // printf("el promedio es: %.2f ", calcularPromedio(numeros,5));
printf("maximo: % d  minimo: %d   ",obtenerMaxMin(numeros,5,1), obtenerMaxMin(numeros,5,0));   // LLAMADA PARA MOSTRAR MAX Y MIN

    return 0;
}


int buscarNumero (int numero , int x [ ] , int tam )
{




    int indice = -1;

    for (int  i = 0; i<tam ; i++)
    {
        if (numero == x [ i])
        {
            indice = i;
            break;
        }
    }



    return indice;



}
int obtnerMayor (int x [ ], int tam)
{

    int mayor = x[ 0];  // ARRANCA EN EL PRIMER ELEMENTO DEL ARRAY



    for ( int i = 0; i<tam ; i++)
    {

        if (x[ i]>mayor)             // DEVUELVE EL NUMERO MAYOR DEL ARRAY
        {
            mayor = x[ i];
        }



    }
    return mayor;
}
int obtenerMenor(int x [ ] , int tam)
{

   int menor = x[ 0];



    for ( int i = 0; i<tam ; i++)
    {

        if (x[ i]<menor)    // DEVUELVE EL NUMERO MENOR DE ARRAYA
        {
            menor = x[ i];
        }
}
    return menor;
}

 float calcularPromedio(int x[ ], int tam )
{

    float promedio;
    int acumulador = 0;

    for ( int i = 0 ; i < tam ; i++)
    {
        acumulador+= x[ i];                     // PROMEDIO DE TODO LOS NUMEROS DEL ARRAY


    }
   promedio = (float) acumulador / tam;
   return promedio;
}
int obtenerMaxMin (int x [ ] , int  tam, int modo)
{
  int valor = x[ 0];

   // modo igual a 0 implica devolver el menor
   // modo igual a 1 implica devolver el mayor

    for ( int i = 0; i<tam ; i++)
    {

        if (x[ i] <valor && modo == 0)
        {
            valor = x[ i];
        }
        else if (x[ i ]>valor && modo == 1 )     // FUNCION PARA MAX Y MIN JUNTOS
        {
            valor = x [ i];
        }
}
    return valor;
}
