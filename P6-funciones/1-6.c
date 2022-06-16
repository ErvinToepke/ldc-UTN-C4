#include <stdio.h>
#include <stdlib.h>

float cubo(float x);
float num1, potencia, resultado;

int main()
{
 printf("Ingresa un numero:\n");
 scanf("%f", &num1);

 resultado = cubo(num1);

 printf("El cubo de su numero es: %.2f\n", resultado);

 system("pause");
 return 0;
}
//función cubo
float cubo(float num1)
{
 float rta;
 rta = num1 * num1 * num1;
 return rta;
}