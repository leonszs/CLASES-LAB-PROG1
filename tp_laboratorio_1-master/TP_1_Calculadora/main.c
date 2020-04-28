/*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
/** \brief Funcion principal
 *
 * \param Declaro variables,pido que ingrese el usuario 2 numeros, con un do while itero si el usuario quiere seguir y despliego el menu de opciones
 * \param En el switch voy llamando a las funciones de mi biblioteca para devolver el resultado de mi calculadora;
 * \return
 *
 */

int main()
{
    int operando1;
    int operando2;
    char opciones;
    int resultado;
    float resultadoD;
    int flag = 0;



    do
    {

        printf("\nBienvenido a la calculadora :)\n");
        printf("\nEste es el menu de opciones :\n");

        printf("\nIngrese el primero operando : \n");
        scanf("%d", &operando1);
        printf("\nIngres el segundo operando : \n");
        scanf("%d", &operando2);


        printf("\nPara realizar solo la suma ingrese : A\n");
        printf("\nPara realizar  solo la resta ingrese : B \n");
        printf("\nPara realizar  solo la division ingrese : C \n");
        printf("\nPara realizar solo la multiplicacion : D \n");
        printf("\nPara realizar solo el factorial de los operandos ingrese : E\n");
        printf("\nPara realizar TODAS LAS OPERACIONES INGRESE : X\n");
        printf("\n SALIR : F \n ");

        fflush(stdin);
        scanf("%c", &opciones);

        switch(opciones)
        {




        case'A' :

            resultado = suma(operando1,operando2);
            printf("\nEl resultado de %d + %d es : %d",operando1, operando2, resultado );
            break;

        case 'B' :

            resultado = resta(operando1,operando2);
            printf("\nEl resultado de %d - %d es : %d",operando1, operando2, resultado );
            break;

        case 'C' :

            if (operando2 == 0)
            {
                printf("No se puede dividir por 0!!!");
                break;
            }
            else
            {

                resultadoD = division(operando1,operando2);
                printf("\nEl resultado de %d / %d es : %.2f",operando1, operando2, resultadoD );
                break;
            }

        case 'D' :

            resultado = multiplicacion(operando1,operando2);
            printf("\nEl resultado de %d * %d es : %d",operando1, operando2, resultado );
            break;

        case 'E' :

            resultado = factorial1(operando1);
            printf("\nEl resultado de !%d es : %d",operando1,  resultado );

            resultado = factorial2(operando2);
            printf("\nEl resultado de !%d es : %d",operando2,  resultado );
            break;

        case 'X':

            resultado = suma(operando1,operando2);
            printf("\nEl resultado de %d + %d es : %d",operando1, operando2, resultado );

            resultado = resta(operando1,operando2);
            printf("\nEl resultado de %d - %d es : %d",operando1, operando2, resultado );

             if (operando2 == 0)
            {
                printf("\nNo se puede dividir por 0!!!\n");

            }
            else
            {

                resultadoD = division(operando1,operando2);
                printf("\nEl resultado de %d / %d es : %.2f",operando1, operando2, resultadoD );

            }

            resultado = multiplicacion(operando1,operando2);
            printf("\nEl resultado de %d * %d es : %d",operando1, operando2, resultado );

            resultado = factorial1(operando1);
            printf("\nEl resultado de !%d es : %d",operando1,  resultado );

            resultado = factorial2(operando2);
            printf("\nEl resultado de !%d es : %d",operando2,  resultado );
            break;

        case 'F' :

            printf("ADIOS :(");
            flag++;
            break;


        default :

            printf("Opcion incorrecta");

        }

        if (flag == 1)
        {
            opciones = 'F';
        }
        else
        {
            printf("\n");
            printf("\nQuiere seguir? ingrese: ENTER, de lo contrario : F\n");

            fflush(stdin);
            scanf("%c", &opciones);
            system("cls");

        }



    }
    while (opciones != 'F' );
}

