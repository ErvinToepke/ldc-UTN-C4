#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int vector[6] = {10, 20, 5, 15, 30, 20};
    int i, mayor, total = 0, r=0, impar;

    mayor = vector[0];
   
  

    for(i = 0;i < 6;i++)
    {
        printf("indice %d \t valor %d \n", i, vector[i]);
        total = total + vector[i];
        
        if(vector[i]>mayor)
        {
            mayor = vector[i];
            
        }
        if(vector[i] == 20)
        {
            r = r+1;
        }
        if(vector[i]%2==0 && i%2==0)
        {
        } else { printf("pociciones impares:\n");
                 printf("indices %d\n", i);
                 printf("valor %d\n", vector[i]);
                }
    }
    printf("el mayor es: %d\n", mayor);
    printf("el 20 se repite: %d\n",r);
    printf("el total de los vectores es: %d\n",total);
    
    
    
    
          

    system("pause");
    return 0;
   

    
}