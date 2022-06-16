#include <stdio.h>
#include <stdlib.h>
int main(){
    int lado1;
    int lado2;
    int perimetro;
    int diagonal;
    int superficie;
    printf("ingrese valor lado 1 \n");
    scanf("%d", &lado1);
    printf("ingrese valor lado 2 \n");
    scanf("%d", &lado2);
    perimetro =  2 * (lado1 + lado2);
    printf("per%cmetro del rectangulo es de:%d \n", 161, perimetro);
    diagonal = sqrt(pow(lado1,2)+pow(lado2,2));
    printf("la diagonal del rectangulo es de :%d \n");
    system("pause");
    return 0;
}
