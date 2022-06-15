#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int array1[5];
    int array2[5];
    int array3[10];

    int i;

    for(i=0;i<5;i++)
    {
        printf("complete array 1: \n");
        scanf("%d", &array1[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("complete array 2: \n");
        scanf("%d", &array2[i]);
    }

    for(i=0;i<5;i++)
    {
        array3[i] = array1[i];
    }

     for(i=0;i<5;i++)
    {
        array3[5+i] = array2[i];
    }

     for(i=0;i<10;i++)
    {
        printf("el array 3 es: %d\n", array3[i]);
    }

    system("pause");
    return 0;
}