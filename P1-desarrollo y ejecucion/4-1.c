#include <stdio.h>
#include <stdlib.h>
void main() {
    float plado, slado, hipotenusa,perimetro, superficie;
    printf("ingrese un lado del triangulo rectangulo: \n");
    scanf("%f", &plado);
    printf("ingrese otro lado del traingulo rectangulo: \n");
    scanf("%f", &slado);
    hipotenusa = sqrt((plado * plado) + (slado * slado));
    perimetro = plado + plado + hipotenusa;
    superficie = plado * slado / 2;
    printf("\n hipotenusa: %.2f perimetro: %2.f superficie: %2.f", hipotenusa, perimetro, superficie);
    system("pause");
}