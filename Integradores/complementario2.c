#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float kg = 0, l = 0, oz = 0, gr = 0;
    int opc;
  do
   {
     printf("Bienvenido a la balanza 'el tranza feliz'\n");
     printf("que valor en kg desea convertir?\n");
     scanf("%f", &kg);
     printf("1.libra\n");
     printf("2.onza\n");
     printf("3.gramos\n");
     printf("4.salir\n");
     printf("seleccione su opcion\n");
     scanf("%d", &opc);

      switch (opc)
       {
         case 1:
         l = kg * 2.20462;
         printf("%.2fkg\t", kg);
         printf("son: %.2f Libras\n", l);
         break;

         case 2:
         oz = kg * 35.274;
         printf("%.2f kg\t", kg);
         printf("son: %.2f Onzas\n", oz);
         break;

         case 3:
         gr = kg * 1000;
         printf("%.2f kg\t", kg);
         printf("son: %.2f GR\n", gr);
         break;

         case 4:
         exit(EXIT_SUCCESS);
         break;

        }  
    } while (opc >= 1 && opc <= 5); 

    return 0;

}