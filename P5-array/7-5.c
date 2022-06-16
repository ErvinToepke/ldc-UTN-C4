#include <stdio.h>
#include <stdlib.h>


int main(){

float array[10];
float prom = 0, sum = 0;
int i,n;

    printf("Ingrese cantidad de valores: ");
    scanf("%d", &n);
    for(i = 0; i < n ; i++)
    {
        printf("Ingrese numeros: ");
        scanf("%f", &array[i]);
        sum += array[i];
    }

    printf("La suma de sus notas es: %.2f\n", sum);
    prom = sum/n;
    printf("El promedio de sus notas es: %.2f\n", prom);
    return 0;
}