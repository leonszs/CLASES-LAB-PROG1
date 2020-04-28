#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[ 20] ;
    char localidad [ 20];

    printf("ingrese su nombre  \n");
    scanf("%s", nombre);

    printf("ingrese su localidad  \n");
    scanf("%s",localidad);

    printf("su nombre es: %s  y vive en: %s ",nombre,localidad);

    return 0;
}
