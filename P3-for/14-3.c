#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,j,n;
    

    do
    {
      printf("seleccione un numero positivo:\n");
      scanf("%d", &n);
      system("cls");

      for (i = 1 ; i <= n;i++)
        {   
            
            printf("\n");
            for (j = n; j >= i;j--)
            {
              printf("%d\t", i);
     
            }
              printf("\n");
               

        }
        
    } while ( n < 0);
  system("pause");
  return 0;
}