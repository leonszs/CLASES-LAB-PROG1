#include <stdio.h>
#include <stdlib.h>

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
                                              // LA ESTRUCTURA FUERA DEL MAIN
int main()
{




    eEmpleado unEmpleado = {1234 , "juan" ,'m' ,   30    ,20000.50, { 27,4,2020}};
    eEmpleado otroEmpleado;

   // otroEmpleado = unEmpleado;

   //mostrarEmpleado(unEmpleado);
   //mostrarEmpleado(otroEmpleado);

   printf("ingrese id: \n");
   scanf("%d", &otroEmpleado.id);

   printf("ingrese nombre: \n");
   fflush(stdin);
   gets(otroEmpleado.nombres);

   printf("ingrese sexo: \n");
   fflush(stdin);
   scanf("%c", &otroEmpleado.sexo);

   printf("ingrese edad: \n");
   scanf("%d", &otroEmpleado.edad);

   printf("ingrese sueldo: \n");
   scanf("%f", &otroEmpleado.sueldo);

   printf("ingrese dia: \n");
   scanf("%d", &otroEmpleado.fechaIngreso.dia);

   printf("ingrese mes: \n");
   scanf("%d",&otroEmpleado.fechaIngreso.mes);

   printf("ingrese anio: \n");
   scanf("%d", &otroEmpleado.fechaIngreso.anio);

   mostrarEmpleado(unEmpleado);
   printf("\n \n");
   mostrarEmpleado(otroEmpleado);

    return 0;
}

 void mostrarEmpleado (eEmpleado x)
 {

      printf("%d\n", x.id );
    printf("%s\n", x.nombres);
    printf("%c\n", x.sexo);
    printf("%d \n", x.edad);
    printf("%.2f \n", x.sueldo);
    printf("%2d   %02d  %4d \n", x.fechaIngreso.dia, x.fechaIngreso.mes , x.fechaIngreso.anio);


 }
