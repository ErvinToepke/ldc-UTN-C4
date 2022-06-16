#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero [] = {1, 2, 3, 4, 5};
    float su = 0; //su = suma pro = promedio
    float pro = 0;
    int i;
    
    for(i = 0;i < 5;i++)
    {
        
        su = su + numero[i];
    }
    pro = su/i;
    printf("la suma es: %.0f \n", su);
    printf("el promedio es: %.2f \n", pro);
    return 0;
}