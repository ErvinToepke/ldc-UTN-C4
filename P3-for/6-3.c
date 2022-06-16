#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,num = 0;
    for (i = 3;i <= 30; i+=3)
    {
     num = i + num;
      
           
    }
     printf("  %d\n",num);
    
   
   
    system("pause");
}