#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n1,i;
    char otra;
    do
    {
        printf("para saber las tablas ingrese un numero: \n");
        scanf("%d", &n1);

        for (i = 1; i <= 10; i++)
            printf("\n %d * %d = %d \n", i,n1, i * n1);


        printf("pulse para ver otra tabla");
        fflush( stdin );
        scanf("%c", &otra); 

    } while ( otra != n1);

    return 0;
    

   
}