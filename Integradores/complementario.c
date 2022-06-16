#include <stdio.h>
#include <stdlib.h>

int main () 
{
    float d = 0,e = 0,cs = 0;//d = deposito e = extraccion cs = consultar saldo
    int c = 1234, i = 3, op = 0, opc; //opc = opcion c = contraseña i = intento op = operaciones
    

    printf("***Bienvenido al banco TSCOTODO***\n");

    do
    {

        printf("ingrese su clave:\n");
        scanf("%d", &c);
        if ( c == 1234)
        {
            printf("Bienvenido Sr.Gato\n");
        }
        else 
        {
            i--;
            printf("clave incorrecta\n reintente\n ");
            if (i == 0)
            {
                printf("se han agotado los intentos\n");
                exit(EXIT_SUCCESS);
            }
        }    
            

    } while (c !=1234 && i <= 3);

    do
    {
        
        printf("1.Consulta de saldo\n");
        printf("2.Deposito\n");
        printf("3.Extraccion\n");
        printf("4.Movimientos\n");
        printf("5.Salir\n");
        printf("Para comenzar a operar seleccione una opcion\n");
        scanf("%d", &opc);         
        
        switch (opc)
       {
           case 1:  
              if (cs == 0)
               {
                 printf("no posee saldo\n");
                 printf("ralize un deposito\n\n");
                }
               else 
               {
                 printf("su saldo es:%f\n\n ", cs);
                }
                op++;
                
            break;

            case 2:
             printf("ingrese monto a depositar:\n");
             scanf("%f", &d);
             cs = cs+d;
             op++;
             
            break;

            case 3: 
             printf("Saldo:%f\n", cs);
             printf("ingrese monto a extraer:\n");
             scanf("%f", &e);
                if (e > cs)
                {
                    printf("exede el monto disponible\n\n");
                }
                else
                {
                    printf("se retiro:\n%f\n", e);
                cs = cs-e;
                }
                op++;
                
            break;

            case 4:
             printf("Movimientos realizados:%d\n\n", op + 0);
             
            break;

            case 5:
             exit(EXIT_SUCCESS);
            break;
        }  
     if (op > 10)
     {
       printf("no puede realizar mas operaciones");
       exit(EXIT_SUCCESS);
     }              
        

    } while (op <= 10 || opc != 5);    

   

    return 0;
}