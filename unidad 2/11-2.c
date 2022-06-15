#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0;
    char opcion;
    float n1, n2;

    do
    {
        printf( "\n   >>> MENU CALCULADORA <<<" );
        printf( "\n\n   1. Sumar dos n%cmeros.", 163 );
        printf( "\n   2. Restar dos n%cmeros.", 163 );
        printf( "\n   3. Multiplicar dos n%cmeros.", 163 );
        printf( "\n   4. Dividir dos n%cmeros.", 163 );
        printf( "\n   5. operaciones realizadas.\n" );
        printf( "\n   6. salir\n");

       
        do
        {
            printf( "\n   Introduzca opci%cn (1-6): ", 162 );
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '6' );
       

        switch ( opcion )
        {
                      
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%f", &n1);
                      printf( "\n   Introduzca segundo sumando: " );
                      scanf( "%f", &n2);
                      printf( "\n   %.2f + %.2f = %.2f\n", n1, n2, n1 + n2 );
                      c++;
                      break;

                      
            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%f", &n1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%f", &n2);
                      printf( "\n   %.2f - %.2f = %.2f\n", n1, n2, n1 - n2 );
                      c++;
                      break;

                      
            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%f", &n1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%f", &n2);
                      printf( "\n   %.2f * %.2f = %2.f\n", n1, n2, n1 * n2 );
                      c++;
                      break;

            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%f", &n1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%f", &n2);
                      c++;
                      if ( n2 != 0 )
                          printf( "\n   %.2f div %.2f = %.2f ( Resto = %.2f )\n", n1, n2, n1 / n2, n1 / n2 );
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );

            
            case '5': printf("operaciones realizadas:%d \n", c + 0);              
        }

    } while ( opcion != '6' );

    return 0;
}