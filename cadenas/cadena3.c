#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char nombre[10][50];
    char apellido[10][50];
    int i;

    for(i = 0;i <= 2;i++)
    {
         printf("ingrese nombre \n");
         scanf("%s", nombre[i]);
         printf("ingrese apeliido \n");
         scanf("%s", apellido[i]);
    }

      for(i = 0;i <= 2;i++)
    {
        strcat(nombre[i], (" "));
        printf("nombre y apellido: %s \n", strcat(nombre[i], apellido[i]));
    }


    system("pause");
    return 0;


}