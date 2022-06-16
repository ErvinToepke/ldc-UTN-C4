#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dni=45655056, pin=250504, cbu=986323456, saldo=150000, dniInput, pinInput, intentos=0, opc;
    char opcReturn;
    printf("***Bienvenido a su sistema bancario favorito***\n");
    do
    {
        printf("Por favor ingrese su DNI y su PIN de seguridad\n");
        printf("DNI: ");
        scanf("%d", &dniInput);
        printf("PIN: ");
        scanf("%d", &pinInput);
        if (dniInput != dni || pinInput != pin)
        {
            printf("Usuario no valido\n");
        }
        else
        {
            printf("Ingreso exitoso\n");
        }       
        intentos++;
    } while ((dniInput != dni || pinInput != pin )&& intentos<=3);
    do
    {
        opcReturn=0;
        printf("***MENU DE OPERACIONES***\n");
        printf("1) Consultar Saldo\n");
        printf("2) Consultar CBU\n");
        printf("3) Salir\n");
        printf("Opcion: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            printf("El saldo es de %d\n", saldo);
            break;
        case 2:
            printf("El CBU es: %d\n", cbu);
            break;
        case 3:
            exit(EXIT_SUCCESS);
            break;    
        default:
            if (opc<1 || opc>3)
            {
                printf("Opcion no valida\n");
            }
            break;
        }
        printf("Si desea realizar otra operacion ingrese y: \n");
        fflush(stdin);
        scanf("%c", &opcReturn);
          
    } while (opcReturn == 'y');

    system("pause");
    return 0;
    
}