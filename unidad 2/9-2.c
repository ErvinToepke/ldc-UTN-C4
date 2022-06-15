#include <stdio.h>
#include <stdlib.h>

//Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor//
//o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la//
//altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura//
//es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”//

void main() {

    float altura;

    printf("ingrese su altura: \n");
    scanf("%f", &altura);

    if(altura <= 150) {
        printf("usted es un hobbit\n", altura);
    } 
    else
    {
        if(altura >= 151 && altura <= 170) {
            printf("usted es normalito\n", altura);
        }
        else
        {
            if(altura > 171) {
                printf("usted toca el cielo con las manos\n", altura);
            }
        
        }
    }
    system("pause");
}
    
