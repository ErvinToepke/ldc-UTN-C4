#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int c = 0;
    float n;
   do
   {
     printf("Ingrese un valor entero (0 para finalizar): \n");
     scanf("%f", &n);
     c++;
     
       if (n == 0)
       {
         printf("cantidad de numeros ingresados = %d \n", c - 1);

        } 

    } while (n != 0);
 
 
}