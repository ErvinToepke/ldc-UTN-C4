#include <stdio.h>
#include <stdlib.h>


void main () 
{
    int vehiculos, horario, pasajeros, peaje;

    printf("tipo de vehiculo:\n");
    printf("1.camion\n");
    printf("2.auto\n");
    printf("3.moto\n");
    do 
    {
        scanf("%d", &vehiculos);
        if (vehiculos <1 || vehiculos >3)
        printf("vehiculo incorrecto\n");
    } while (vehiculos <1 || vehiculos >3);
    
    printf("1. horario de alta congestion\n");
    printf("2. horario de baja congestion\n");
    do
    {
        scanf("%d", &horario);
        if (horario <1 || horario >2)
        printf("horario incorrecto\n");
    
    } while (horario <1 || horario >2);
    printf("ingrese cantidad de pasajeros conductor incluido\n");
    
    do
    {
        scanf("%d", &pasajeros);
        if (pasajeros <1 || pasajeros >4)
        printf("multa!! por loro lcdtm\n");
    } while (pasajeros <1 || pasajeros >4);

    switch ( peaje )
    {
    
     case '1': (horario == 1 && vehiculos == 1 && pasajeros > 4);
    
      peaje = 300;
      break;
        
    
     case '2': (horario == 1 && vehiculos == 2 && pasajeros > 4);
    
      peaje = 250;
      break;

     case '3': (horario == 1 && vehiculos == 3 && pasajeros > 2);
    
      peaje = 150;
      break;
      
      case '4': (horario == 1 && vehiculos == 2 && pasajeros == 3);
    
      peaje = 0;
      break;
     
     case '5': (horario == 2 && vehiculos == 1 && pasajeros > 4);
    
      peaje = 200;
      break;

     case '6': (horario == 2 && vehiculos == 2 && pasajeros > 4);
    
      peaje = 150;
      break;

     case '7': (horario == 2 && vehiculos == 3 && pasajeros > 4);
    
      peaje = 0;
     break;

     default: 
      printf("peaje:%d\n", peaje);
     break;

    }
    
       
  system("pause");
 
}