#include <stdio.h>
#include <stdlib.h>


//- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde//
//dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la//
//consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura//
//if y luego estructura switch).//

void main() {
    
    int mes;

    printf( "\n   Introduzca mes del a%co: ", 164 );
    scanf( "%d", &mes );

    if ( mes >= 1 && mes <= 12 )
    {
         switch ( mes )
    {
        case  1 : printf( " Usted selecciono  Enero \n" );
                  break;
        case  2 : printf( " Usted selecciono  Febrero \n" );
                  break;
        case  3 : printf( " Usted selecciono Marzo \n" );
                  break;
        case  4 : printf( " Usted selecciono  Abril \n" );
                  break;
        case  5 : printf( " Usted selecciono Mayo \n" );
                  break;
        case  6 : printf( " Usted selecciono Junio \n" );
                  break;
        case  7 : printf( " Usted selecciono  Julio \n" );
                  break;
        case  8 : printf( " Usted selecciono  Agosto \n" );
                  break;
        case  9 : printf( " Usted selecciono  Septiembre \n" );
                  break;
        case 10 : printf( " Usted selecciono  Octubre \n" );
                  break;
        case 11 : printf( " Usted selecciono  Noviembre \n" );
                  break;
        case 12 : printf( " Usted selecciono Diciembre \n" );
                  break;       
    }
    
    } else
        printf( "ERROR: Mes incorrecto. \n" );
    
    system("pause");
}



