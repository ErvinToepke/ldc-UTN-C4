#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numeros [] = {1, 2, 3, 4, 5};

    printf("por orden\n");

    for(int i = 0; i < 5;i++)
    {
        printf("indice %d \t valor %d \n", i, numeros[i]);
    }
    printf("al reves papu\n");

    for(int i = 4; i >= 0;i--)
    {
         printf("indice %d \t valor %d \n", i, numeros[i]);
    }

    


    return 0;
} 