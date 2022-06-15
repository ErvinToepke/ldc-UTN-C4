#include <stdio.h>
#include <stdlib.h>

int sumaDeDigitos (int numero)
{
   int suma=0;
   
   if (numero < 10)
      return numero;
   else
   {
      while (numero >= 10)
      {
         suma += numero % 10;
         numero /= 10;
      }
      suma += numero;
      return suma;
   }  
}  

int main()
{
   int num;
   
   printf("Escriba un numero entero positivo: \n");
   scanf("%d", &num);
   printf("La suma de los digitos de %d es: %d",
      num, sumaDeDigitos(num));
   
   return 0;
}  