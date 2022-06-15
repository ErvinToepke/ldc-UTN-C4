#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int n = 1; //numero
   int s = 0; //suma
   int c = 1; //contador
   

   do
   {
       printf("ingrese un numero positivo:\n");
       scanf("%d", &n);

       
        if(n < 1)
       {
           printf("error\n");
           do
           {
               printf("ingrese un numero positivo:\n");
               scanf("%d", &n);
               
           
           
            } while ( c <= 1);

            
        }

       s = s+n;
       c = c+1;
    } while (c <= 10);
       printf("el valor de la suma es:%d\n", s);
       
   
   
   return 0;
}