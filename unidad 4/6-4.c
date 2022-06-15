#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int c = 0,n; //nota //contador
    float suma = 0;
    float pro; //promedio

    do 
    {
        printf("ingrese notas:\n");
        scanf("%d", &n);
        printf("ingrese 0 para sumar notas y sacar promedio\n");
        suma = suma+n; 
        c++;               
    
    } while (n != 0);
         
    printf("la suma de las notas es: %.2f \n", suma);                                  
        
    pro = suma/c;
    printf("el promedio de las notas es: %.2f \n", pro);

    return 0;

}
   

