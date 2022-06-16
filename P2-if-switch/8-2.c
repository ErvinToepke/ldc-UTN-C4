#include <stdio.h>
#include <stdlib.h>

//Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo//
//sea mayor o igual que el importe a retirar.//



void main() {
    float saldo=90000;
    float retirar;
    


    printf("ingrese el monto a retirar\n");
    scanf("%f", &retirar);

    if(retirar <= saldo) {
        saldo = saldo - retirar;
        printf("saldo actual: $%f\n", saldo);
    } else {
        printf("el retiro no puede ser realizado\n");
    }
system("pause");
  

}