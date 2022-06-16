#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v; //vendedor
    char co; //codigo
    float ve; //venta
    float c; //comision
    float su = 0; //suma

   do
   { 
       for (v =1; v <=5;v++)
       {
         printf("ingrese codigo de vendedor: \n");
         scanf("%d", &v);

          switch ( v )
           {
             case 1: ( co = 'A');
             break;

             case 2: ( co = 'B');
             break;

             case 3: ( co = 'C');
             break;

             case 4: ( co = 'D');
             break;

             case 5: ( co = 'E');
             break;
            }

          printf("Vendedor %c\n", co);       

           do
           {           
             printf("ingrese una venta:\n");
             scanf("%f", &ve);
             su = su + ve;         
            } while (ve != 0);

          printf("Vendedor:%c\n", co);
          printf("total de ventas:%.2f\n", su);
          c = su * 0.025;
          printf("la comision es:%.2f\n", c);

        }
    } while ( co <= 5 );

    return 0;
}