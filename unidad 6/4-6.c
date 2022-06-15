#include <stdio.h>
#include <stdlib.h>

int esPrimo(int nu)
{   
    int contador = 0;
    for (int i = nu; i > 0;i--)
    {
        if(nu % i == 0)
        {
            contador++;
        }
    }
    if(contador == 2)
    {
        printf("es primo\n");
    }
    else
    {
        printf("es compuesto\n");
    }  
}

int main () 
{
    int nu, r;
    printf("ingrese un numero \n");
    scanf("%d", &nu);
    r = esPrimo(nu);
    system("PAUSE");
    return 0;
}