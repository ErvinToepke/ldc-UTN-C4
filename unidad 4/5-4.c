#include <stdio.h>
#include <stdlib.h>

int main ()
{
 int dni = 38632584;
 int i;
 float nota = 7;

 int dniIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;

 while (dni == 38632584)
   {
     printf("Bienvenido al sistema de notas\n");
     
     for (i = 1; i <= 3;i++)
     {
       printf("Para saber la nota de un alumno ingrese DNI:\n");
       scanf("%d", &dni);
       if (dni = 38632584)
       {
         printf("ingreso correctamente\n");
         break;
       }
       else
       {
         printf("DNI incorrecto\n");
       }

      }
      printf("la nota del alumno %d es:\n" ,dni);
      printf("%.2f", nota);

    } 
 
 
 return 0;
}
