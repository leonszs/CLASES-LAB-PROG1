#include <stdio.h>
#include <stdlib.h>

int main()
{
    int precio;
    int descuento;
    int precioConDescuento;
    int preciofinal;

     printf("ingrese el precio:  \n");
     scanf("%d",&precio);

     printf("ingrese el descuento:   \n");
     scanf("%d",&descuento);

     precioConDescuento = precio * descuento;
     preciofinal = precioConDescuento /100;

    printf("el descuento es:  %d ", preciofinal);

    return 0;
}
