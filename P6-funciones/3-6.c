#include <stdio.h>
#include <stdlib.h>

char primerCaracter(char* cadena){
    return cadena[0];
}

int main(){
    char frase[200];
    printf("Escribe una frase: ");
    gets(frase);
    printf("La primera letra es: %c\n", primerCaracter(frase));
    system("PAUSE");
    return 0;
}