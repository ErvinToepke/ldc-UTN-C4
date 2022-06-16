#include <stdio.h>
#include <stdlib.h>

//Leer una nota de un alumno por consola e informar la condición del mismo.//
// (menor que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado).//
// Validar que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar//
// “Nota inválida”.//


void main() {
    int nota;
    printf("ingrese el valor de la nota\n");
    scanf("%d", &nota);

    if( nota < 0 || nota > 10){
        printf("nota invalida\n");
        } else {
        if(nota < 4){
            printf("alumno reprobado\n");
        } else {
            if(nota > 4 && nota < 6){
                printf("alumno regular\n");
            } else {
                if(nota >= 6){
                    printf("alumno aprobado\n");
                }
            
            }
        }
    }

   
    system("pause");
}