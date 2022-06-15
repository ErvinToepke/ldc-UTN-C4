#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float n1, n2, suma = 0, resta = 0;

    printf("ingresa primer numero:\n");
    scanf("%f", &n1);
    printf("ingrese segundo numero:\n");
    scanf("%f", &n2);

    suma = n1 + n2;
    resta = n1 - n2;

    printf("la suma es:%.2f\n", suma);
    printf("la resta es:%.2f\n", resta);

    return 0;
}