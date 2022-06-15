#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char cadena1[10];
    char cadena2[10];
    char cadena3[10];
    int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);
    int longitud3 = strlen(cadena3);

    printf("ingrese la primer cadena: \n");
    scanf("%s", cadena1);

    printf("ingrese la primer cadena: \n");
    scanf("%s", cadena2);

    printf("ingrese la primer cadena: \n");
    scanf("%s", cadena3);

    printf("la longitud de cadena 1 es : %d \n", strlen(cadena1));
    printf("la longitud de cadena 2 es : %d \n", strlen(cadena2));
    printf("la longitud de cadena 3 es : %d \n", strlen(cadena3));

    system("pause");
    return 0;


}