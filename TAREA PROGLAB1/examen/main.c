#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largo;
    int ancho;
    int perimetro;

    printf("ingrese el largo:  \n");
    scanf("%d",&largo);

    printf("ingrese el ancho:   \n");
    scanf("%d",&ancho);

    perimetro = ancho*2 + largo*2;

    printf("el perimetro es: %d  ", perimetro);

    return 0;
}
