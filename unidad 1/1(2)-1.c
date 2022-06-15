#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int resultado;
    printf("ingrese el primer valor\n");
    scanf("%d",&num1);
    printf("ingrese el segundo valor\n");
    scanf("%d",&num2);
    printf("ingrese el tercer valor\n");
    scanf("%d",&num3);
    resultado = num1 + num2 + num3;
    printf("el resultado de la suma es:%d\n",resultado);

    
    return 0;
}

