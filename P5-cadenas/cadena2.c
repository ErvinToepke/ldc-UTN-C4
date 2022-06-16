#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char nombre1[10];
    char nombre2[10];

    printf("ingrese un nombre: \n");
    scanf("%s", nombre1);

    printf("ingrese un nombre: \n");
    scanf("%s", nombre2);

    if (strcmp(nombre1,nombre2)==0)
    {
        printf("Los dos nombres son iguales");
    }
    else
    {
        if (strcmp(nombre1,nombre2)>0)
        {
            printf("%s es precede alfabeticamente",nombre2);
        }
        else
        {
            printf("%s es precede alfabeticamente",nombre1);
        }

    }
    system("pause");
    return 0;
}