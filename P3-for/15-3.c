#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i,j;
  int nota;
  float suma1=0, suma2=0;
  float promedio1, promedio2;
 
  for (i=1; i<=5; i++)
  {
    printf("\nCalificaciones alumno %d\n", i);
    
    for (j=1; j<=3; j++)
    {
        printf("\nIngrese nota %d: ",j);
        scanf("%d",&nota);
        suma1=suma1+nota;
    }
    promedio1 = suma1 / 3;
    printf("\nEl promedio es %.2f", promedio1);
    suma2=suma2+promedio1;
    suma1=0;
    if(promedio1 >= 8)
    {
      printf("\nalumno aprobado");
    } 
     else if (promedio1 <8 && promedio1 >=6)
    {
  	 printf("\nalumno regular");
  	
    } 
     else if (promedio1 <6)
    {
   	 printf("\nalumno reprobado");
    }
   promedio2 = suma2 / 5;
   printf("\nEl promedio general es: %.2f",promedio2);
  
  }

 return 0;
}

