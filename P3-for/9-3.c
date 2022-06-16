#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, n;

    for ( i = 1; i <= 9; i++)
    {
        printf("\n***tabla del %d ***\n", i);
        for ( n = 1; n <= 10; n++)
        {
        
         printf("%d * %d = %d\n", i, n, i * n);
        }
    
        
    }
    return 0;
}
