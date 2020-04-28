#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    char sexo;

    printf("ingrese su nota:   ");
    fflush(stdin);
    scanf("%d",&nota);



    while (nota >10 ||nota <0)
    {
        printf("esta nota no es valida, ingrese otra:");
        fflush(stdin);
        scanf("%d", &nota);



    }

  printf("ingrese su sexo f o m ");
  fflush(stdin);
    scanf("%c", &sexo);

    while (!(sexo == 'f' || sexo == 'm'))
    {
        printf("ingreso mal el sexo, reingrese");
        fflush(stdin);
        scanf("%c",&sexo);


    }
}
