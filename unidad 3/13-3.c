#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,j;
    
    printf("El entero %d se convierte a '%c' como caracter", i,64);

    system("cls");

    for (i= 10; i>=1;i--)
    {
        
         for (j = 1; j <= i;j++)
        {
            printf("%c",64);
            
        }
        printf("\n");
    }
    return 0;
} 