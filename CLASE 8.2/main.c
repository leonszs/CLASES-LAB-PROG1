#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void copiarCadena (char cadDestino [ ] , char cadOrigen [ ] );
void normalizarNombres (char name [ ] , char lastName [ ] , char fullName[ ]);
int main()
{
    char nombre [ 20];
    char apellido [ 20];
    char nombreCompleto [ 41];

    printf("ingrese nombre:  \n");
    fflush(stdin);
    gets (nombre);

    printf("ingrese apellido: \n ");
    fflush(stdin);
    gets (apellido);

   normalizarNombres(nombre, apellido, nombreCompleto);
   puts(nombreCompleto);



    // printf("%s ", nombreCompleto);



                               //
                               //







    return 0;
}

void copiarCadena (char cadDestino [ ] , char cadOrigen [ ] )
{
     int i = 0 ;


     while (cadOrigen[ i] !=  '\0' )
        {

            cadDestino[ i] = cadOrigen [ i];

     i++;
     } cadDestino [ i] = cadOrigen [ i];
  }


  void normalizarNombres (char name [ ] , char lastName [ ] , char fullName [ ])
  {


       strcpy(fullName , lastName);

    strcat(fullName , ", " );

    strcat(fullName, name);

    strlwr(fullName);                      // NORMALIZAR INGRESO CON STRLWR

    fullName[ 0] = toupper(fullName[0]);  // SE PASA A MAYUSCULA EL PRIMER CARACTER DEL VECTOR   // PARA QUE EL INDICE 0 APAREZCA EN MAYUSCULA



   for (int i = 0; fullName[i] != '\0'; i++ )          // la segunda palabra con mayuscula
   {
              if (fullName[ i] == ' ')
              {

                  fullName [i + 1] = toupper(fullName[ i + 1]);
              }

   }
          // printf("%s\n" , nombreCompleto);


  }
