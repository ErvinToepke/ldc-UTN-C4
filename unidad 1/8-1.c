#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float horas, valor = 800, sueldo = 0;

    printf("ingrese horas trabajadas:\n");
    scanf("%f", &horas);

    sueldo = horas * valor;

    printf("el sueldo a cobrar es:%.2f\n", sueldo);

    return 0;

    
}