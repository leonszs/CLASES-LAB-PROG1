#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[9]="leon";
    char apellido [9]="tukIC";
    char apellidoynombre[30];
    int len;
    int i;

    strcpy(apellidoynombre,apellido);
    strcat(apellidoynombre,",");
    strcat(apellidoynombre,nombre);

    strlwr(apellidoynombre);
    apellidoynombre[0]=toupper(apellidoynombre[0]);

    len = strlen (apellidoynombre);
    for (i=0;i<len;i++)
   {
       apellidoynombre[i+1] = toupper (apellidoynombre[i+1]);
   }
   puts (apellidoynombre);

    return 0;
}
