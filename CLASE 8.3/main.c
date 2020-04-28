#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define COLUMNAS 20

  // VECTORES PARALELOS

  void mostrarAlumnos (int legajos[ ] , char nombres [ ] [ 20], char apellidos  [ ][ 20 ] , char sexos [ ] , int notasP1 [ ] , int notasP2 [ ] , float promedios [ ] , int tam );
   void mostrarAlumno (int legajo , char nombres[ ], char apellidos [ ], char sexos , int notasP1 , int notasP2 , float promedios   );
int main()
{
    int legajos [ TAM] = {1234, 1112, 1105 ,1111 , 1545 };    //HARDCODEO PARA PROBAR
    int notasP1 [ TAM] = {7,2,2 ,5,7};
    int notasP2 [ TAM] = {8,2,7,10,7 };
    char sexos [ TAM] = { 'm' , 'm' , 'f','f','m' };
    char nombres [TAM] [COLUMNAS] = {"Zoilo" , "Hernan" , "Andrea","Leon" , "Ivan" } ;
     char apellidos [TAM] [COLUMNAS] = {"Perez" , "Garcia" , "Gonzalez", "Tukic", "Vega",  } ;
    float aux;
    int auxInt;
    char auxChar;
    char auxCad [ 50];
    float promedios [ TAM] = {7.5 , 2 , 4.5 ,5,7,} ;


   /* for (int i = 0 ; i<TAM; i++)

     {
         printf("ingrese legajo:  \n");


         scanf("%d", &legajos[i] );

         printf("ingrese nombre: \n ");
         fflush(stdin);
         gets (nombres[i]);

          printf("ingrese apellido: \n ");
         fflush(stdin);
         gets (apellidos[i]);

         printf ("ingrese sexo: );
         fflush(stdin);
         scanf ("%c", &sexos);

        printf("ingrese nota primer parcial:  \n ");
        scanf("%d", & notasP1[ i]);

        printf("ingrese nota segundo parcial:  \n  ");
        scanf("%d", & notasP2[ i] );

         promedios [ i] = (float) (notasP1 [ i] + notasP2 [ i]) / 2;

          } */
          // MOSTRAR EL VECTOR
mostrarAlumnos(legajos, nombres , apellidos , sexos, notasP1 , notasP2 , promedios, TAM);

    for (int i = 0; i<TAM-1 ; i++)

        {

            for (int j = i + 1 ; j<TAM ; j++ )
                 {
                 if (sexos[i] < sexos [j] )   // PARA ORDENAR POR DISTINTO TIPO
                     {
                        aux = promedios[i];
                        promedios[i] = promedios[j];
                        promedios[j] = aux;


                        auxInt = legajos[i];
                        legajos[i] = legajos[j];
                        legajos[j] = auxInt;

                        auxInt = notasP1[ i];
                        notasP1[i] = notasP1[ j];
                        notasP1 [ j] = auxInt;

                        auxInt = notasP2[ i];
                        notasP2[ i] = notasP2 [ j];
                        notasP2 [ j] = auxInt;

                        auxChar = sexos [ i];
                        sexos [ i] = sexos [ j];
                        sexos[ j] = auxChar;

                        strcpy (auxCad , nombres [ i]);
                        strcpy (nombres [ i] , nombres [ j]);
                        strcpy (nombres [ j] , auxCad);

                        strcpy (auxCad , apellidos [ i]);
                        strcpy (apellidos [ i] , apellidos [ j]);
                        strcpy (apellidos [ j] , auxCad);

                       }
                       else if ( sexos[i] == sexos [j] && promedios [i]< promedios[j] )
                       {
                           aux = promedios[i];
                        promedios[i] = promedios[j];
                        promedios[j] = aux;


                        auxInt = legajos[i];
                        legajos[i] = legajos[j];
                        legajos[j] = auxInt;

                        auxInt = notasP1[ i];
                        notasP1[i] = notasP1[ j];
                        notasP1 [ j] = auxInt;

                        auxInt = notasP2[ i];
                        notasP2[ i] = notasP2 [ j];
                        notasP2 [ j] = auxInt;

                        auxChar = sexos [ i];
                        sexos [ i] = sexos [ j];
                        sexos[ j] = auxChar;

                         strcpy (auxCad , nombres [ i]);
                        strcpy (nombres [ i] , nombres [ j]);
                        strcpy (nombres [ j] , auxCad);

                        strcpy (auxCad , apellidos [ i]);
                        strcpy (apellidos [ i] , apellidos [ j]);
                        strcpy (apellidos [ j] , auxCad);

                       }
             }

            }



mostrarAlumnos(legajos, nombres , apellidos , sexos, notasP1 , notasP2 , promedios, TAM);


    return 0;
}
 void mostrarAlumnos (int legajos[ ] , char nombres [ ] [ 20], char apellidos  [ ][ 20 ] , char sexos [ ] , int notasP1 [ ] , int notasP2 [ ] , float promedios [ ] , int tam )
{
      printf("******* LISTADO DE NOTAS  ******** \n");
       printf(" LEGAJOS          NOMBRE            APELLIDOS               SEXOS         NOTAP1    NOTA P2    PROMEDIO \n\n ");

   for (int i = 0 ; i<tam; i++)
    {

        mostrarAlumno(legajos [ i] , nombres [ i] , apellidos[ i] , sexos[ i], notasP1 [ i] , notasP2[ i], promedios[ i]);
      }


return 0;




}
void mostrarAlumno (int legajo , char nombres[ ], char apellidos [ ], char sexos, int notasP1 , int notasP2 , float promedios   )
{

     printf("%4d                 %10s                 %s          %c         %d        %d              %.2f  \n", legajo ,nombres  , apellidos,  sexos  , notasP1 ,notasP2  , promedios );

return 0;
}
