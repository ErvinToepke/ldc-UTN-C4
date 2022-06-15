#include <stdio.h>
#include <stdlib.h>
int main(){
    int valor;
    int tiempo;
    int sueldo;
    printf("valor: ");
    scanf("%d", &valor);
    printf("tiempo: ");
    scanf("%d", &tiempo);
    sueldo = tiempo * valor;
    printf("sueldo es de: %d\n", sueldo);
    system("pause");
    return 0;
}
