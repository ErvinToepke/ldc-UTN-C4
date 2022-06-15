#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int array[5];
    int i,n,r;

    for(i = 0; i < 5; i++)
    {
        printf("ingrese un numero: \n", i+1);
        scanf("%d", &array[i]);
        if (array[i]==5)
      {
        r=r+1;
      }
    }
    
    printf("el 5 se repite: %d \n",r);


 system("pause");
 return 0;
}