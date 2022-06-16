#include <stdio.h>
#include <stdlib.h>

int signo(int rta);
int main()
{
    int num1, resultado;
    printf("Ingrese un numero:\n");
    scanf("%i", &num1);
    resultado = signo(num1);
    printf("El signo de su numero es: %i\n", resultado);
    system("pause");
    return 0;
}
int signo(int rta)
{
    int final;
     if( rta > 0 ) {
         final = 1;
      printf("1\n");
  } 
    else {
      if( rta < 0 ) {
          final = -1;
          printf("-1\n " );
      } 
        else {
          if( rta == 0 ) {
              final = 0;
              printf("0\n");            
          }
      }
  }
    return final;
 }