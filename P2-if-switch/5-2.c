#include <stdio.h>

void main(){
    int num;
    printf("ingrese un numero");
    scanf("%d",&num);
    if (num%2 == 0) {
        printf(" es par\n");
    } else {
        printf("es impar\n");
    }
    system("pause");
    
}