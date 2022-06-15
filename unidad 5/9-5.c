#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int array1[5];
    int array2[5];
    int i;

     for(i=0;i<5;i++)
    {
        printf("complete array 1: \n");
        scanf("%d", &array1[i]);
    }

    for(i=0;i<5;i++)
    {
        array2[i] = array1[i] * 2;
    }

     for(i=0;i<5;i++)
    {
        printf("el array 2 es: %d\n", array2[i]);
    }
    system("pause");
    return 0;
}