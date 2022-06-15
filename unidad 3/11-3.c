#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i = 1;
    
    printf("El entero %d se convierte a '%c' como caracter", i,64);

    system("cls");

    for (i = 1; i <= 10;i++)
    {
        printf("%c%c\n",64);
        printf("%c\n",64);
    }
    return 0;

}