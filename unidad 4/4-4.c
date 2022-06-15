#include <stdio.h>
#include <stdlib.h>

//Realizar un programa que calcule el promedio de las notas de los parciales de un curso.//
//Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de//
//parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los//
//alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean//
//mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha//
//nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va//
//calculando y por último, el promedio general del curso//

int main ()
{
 int a, p, i, j, s;
 float n; 
 float suma1=0, suma2=0;
 float pro1, pro2;
 char  opc;

  do
  {
    printf("ingrese cantidad de alumnos:\n");
    scanf("%d", &a);
   
    printf("ingrese cantidad de parciales tomados:\n");
    scanf("%d", &p);
    for (i = 1; i <= a; i++)
     {      
       printf("alumno:%d\n", i);

       do
       {
         for (j = 1; j <=p; j++)
         {          
           printf("parcial:%d\n", j);
           printf("nota:\n");
           scanf("%f", &n);
                
           
           if (n < 1 || n > 10)
           {
           printf("nota invalida\n");
           printf("parcial:%d\n", j);
           printf("reingrese nota\n");
           scanf("%f", &n);
           }
           suma1 = suma1 + n;
     
          } 
          
          pro1 = suma1 / p;
       
          printf("el promedio del alumno es:%.2f\n", pro1);
          suma1 = 0;
          suma2 = suma2+n;

        } while (n < 1 || n > 10);
        
      }  
    pro2 = suma2 / a;
    printf("el promedio del curso es:%.2f\n", pro2);
    suma2 = 0;

  } while (opc != a);
 
 return 0;

}