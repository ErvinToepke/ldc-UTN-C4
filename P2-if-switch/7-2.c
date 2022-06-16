#include <stdio.h>
#include <stdlib.h>

void main() {
    float venta;

    printf("ingrese el monto de venta: \n");
    scanf("%f", &venta);

    if(venta <= 0) {
        printf("venta invalida %f\n");
    } 
    else
    {
        if(venta < 10000) {
            venta = venta - (venta * 0.10);
            printf("el total a pagar es: $%f\n", venta);
        }
        else
        {
            if(venta >= 10000) {
                venta = venta - (venta * 0.15);
                printf("el total a pagar es: $%f\n", venta);
            }
        
        }
    }

   
   system("pause");
}