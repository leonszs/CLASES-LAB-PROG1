#include <stdio.h>
#include <stdlib.h>
#define TAM 5
typedef struct
 {

     int dia;
     int mes;
     int anio;


 }eFecha;




 typedef struct
 {

   int id;                                    //CAMPOS DE UNA ESTRUCTURA
   char nombres[20];
   char sexo;
   int edad;
   float sueldo;

   eFecha fechaIngreso;







 }eEmpleado;
 void mostrarEmpleado (eEmpleado x);
 void mostrarEmpleados (eEmpleado vec [] , int tam);
 void ordenarEmpleados (eEmpleado vec [] , int tam);
int main()
{


    eEmpleado  lista [TAM] = {  {1234 , "jose" , 'm' , 23 , 12300 ,{12,3,2018}} , {3291 , "juana",'f' , 31 , 23400 , {10,11,2015} } , {4455 , "daniela",'f' , 34 , 21800, {16 , 3 , 2017  }}, {1189 , "lucia" , 'f' , 20 , 20500,{11,2,2014}} , {1020, "andres", 'm' , 23 , 19700,{17,4,2002}}  };

   /* for (int i = 0; i<TAM; i++)
    {
       printf("ingrese id: \n");
   scanf("%d", &lista[i].id);

   printf("ingrese nombre: \n");
   fflush(stdin);
   gets(lista[i].nombres);

   printf("ingrese sexo: \n");
   fflush(stdin);
   scanf("%c", &lista[i].sexo);

   printf("ingrese edad: \n");
   scanf("%d", &lista[i].edad);

   printf("ingrese sueldo: \n");
   scanf("%f", &lista[i].sueldo);

   printf("ingrese dia: \n");
   scanf("%d", &lista[i].fechaIngreso.dia);

   printf("ingrese mes: \n");
   scanf("%d",&lista[i].fechaIngreso.mes);

   printf("ingrese anio: \n");
   scanf("%d", &lista[i].fechaIngreso.anio);


    } */
   /* for (int i = 0 ; i <TAM ; i++)
    {
        mostrarEmpleado(lista[i]);
    } */


    mostrarEmpleados(lista, TAM);


  ordenarEmpleados(lista, TAM);


    mostrarEmpleados(lista, TAM);

    return 0;
}

void mostrarEmpleado (eEmpleado x)
 {

      printf("%d \n ", x.id );
    printf("%s \n ", x.nombres);
    printf("%c  \n ", x.sexo);
    printf("%d  \n ", x.edad);
    printf("%.2f \n ", x.sueldo);
    printf("%2d   %02d  %4d \n", x.fechaIngreso.dia, x.fechaIngreso.mes , x.fechaIngreso.anio);


 }

  void mostrarEmpleados (eEmpleado vec [] , int tam)
  {
      printf("*** LISTA DE EMPLEADOS***\n");

      for (int i = 0; i <tam ; i++)
      {
          mostrarEmpleado(vec[i]);
      }


  }
  void ordenarEmpleados (eEmpleado vec [] , int tam)
  {
      eEmpleado auxEmpleado;
       for (int i = 0; i < tam -1 ; i++)
    {
        for (int j = i + 1 ; j<tam ; j++ )
        {    if ( vec[i].sexo > vec[j].sexo )
            {
               auxEmpleado = vec[i];
               vec[i] = vec [j];
               vec [j] = auxEmpleado;
            }



           else if (strcmp (vec[i].nombres , vec[j].nombres) > 0)
            {
               auxEmpleado = vec[i];
               vec[i] = vec [j];
               vec [j] = auxEmpleado;
            }

        }


    }

  }
