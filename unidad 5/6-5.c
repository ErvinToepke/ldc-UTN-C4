#include <stdio.h>
#include <stdlib.h>

int main(){


int fact[5] = {};
int pro = 0, total = 0;
int i,mayor,menor;
mayor = 0;
menor = 0;


for(i=1; i<=5; i++){

    printf("Ingrese la facturacion de los ultimos 6 meses\n");
    scanf("%d", &fact[i]);
    total = total + fact[i];
    if(fact[i]>mayor){
        mayor = fact[i];
    }else{
        menor = fact[i];
    }
  }
    printf("El mes con la minima facturacion es %d\n", menor);
    printf("El mes con la maxima facturacion es %d\n", mayor);
    printf("El total de su facturacion es: %d\n", total);
}