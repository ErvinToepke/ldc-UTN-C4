#include <stdio.h>
#include <stdlib.h>
int main(){
    int lado1;
    int lado2;
    int lado3;
    int perimetro;
    printf("Ingrese Longitud del primer lado\n");
    scanf("%d",&lado1);
    printf("Ingrese Longitud del segundo lado\n");
    scanf("%d",&lado2);
    printf("Ingrese Longitud del tercer lado\n");
    scanf("%d",&lado3);
    perimetro = lado1 + lado2 + lado3;
    printf("El per%cmetro del triangulo es de:%d\n", 161,perimetro);
    system("pause");
    return 0;
}