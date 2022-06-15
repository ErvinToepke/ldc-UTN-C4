#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num=0;
    for ( i = 1 ; i <=40; i+=2)
    {
        num=i+num;
    }
    printf("%d\n", num);
}
