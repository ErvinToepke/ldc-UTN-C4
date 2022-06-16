#include <stdio.h>
#include <stdlib.h>

//Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.//

void main(){
    int num;

    printf("ingresa num: ");
    scanf("%d", &num);

  if( num > 0 ) {
      printf("positivo\n");
  } 
    else {
      if( num < 0 ) {
          printf("negativo\n " );
      } 
        else {
          if( num == 0 ) {
              printf("nulo\n");            
          }
      }
  }
   
    system("pause");
    
}