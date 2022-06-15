#include <stdio.h>
#include <stdlib.h>

void main () {
   int A, B, C;

    printf("ingrese el valor de A: ");
    scanf("%d", &A);
    printf("ingrese el valor de B: ");
    scanf("%d", &B);
    printf("ingrese el valor de C: ");
    scanf("%d",&C);

    if( A > B && A > C ){
        printf("A es el valor mas alto ");
        }
        else {
            if( B > A && B > C ){
                printf("B es el valor mas alto ");
            }
            else {
                if( C > A && C > B ){
                    printf("C es el valor mas alto ");
                }
                else {
                    if( A==B && A==C && B==C ) {
                        printf("los valores son iguales ");
                    }
                }
            }
        }
    system("pause");
}