#include <stdio.h>
#include <stdlib.h>

void Triangulo (char l, int n)
{
   int i;
   
   while (n > 0)
   {
      for (i=0; i<n; i++)
         printf("%c", l);
      printf("\n");
      n--;
   }  
   return;      
}

int main()
{
   char l;
   int n;
   
   printf("Escriba una letra: ");
   scanf("%c", &l);
   printf("Escriba un numero: ");
   scanf("%d", &n);
   Triangulo(l, n);
   
   return 0;
}                                  