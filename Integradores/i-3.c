#include <stdio.h>
#include <stdlib.h>

struct gestion
{
    int dni;
    int nota;
}alumno[10];

void agregar ()
{
    int i;

    for (i=0;i<2;i++)
    {
        do
        {
            printf("Ingresa el dni del Alumno %d: ",(i+1));
            scanf("%d", &alumno[i].dni);
        } while (alumno[i].dni < 10000000 || alumno[i].dni > 99999999);

        do
        {
            printf("Ingresa la nota del Alumno %d: ",(i+1));
            scanf("%d",&alumno[i].nota);
        } while (alumno[i].nota < 0 || alumno[i].nota > 10);    
        
    }
}

void BuscarAlumno ()
{
    int dn,i,encontrado=0;
    
    printf("Ingresa el dni a Buscar: ");
    scanf("%d",&dn);
    
    for (i=0;i<2;i++)
    {
        if (dn==alumno[i].dni)
        {
            encontrado=1;
            printf("Alumnos %d\n",(i+1));
            printf("dni: %d\n",alumno[i].dni);
            printf("nota: %d\n",alumno[i].nota);    
        }
    }
    if (encontrado==0)
    {
        printf("No hay alumnos con el dni %d\n",dn);
    }
}

void mostrarTodos ()
{
    int i;
    printf("Mostrando los datos de los Alumno\n");
    for(i=0;i<2;i++)
    {
        printf("Alumno %d\n",(i+1));
        printf("dni: %d\n",alumno[i].dni);
        printf("nota: %d\n",alumno[i].nota);
    }
}

void modificar ()
{
int dn, encontrado=0, i;

    do
    {
        printf("Ingrese el dni a buscar: ");
        scanf("%d", &dn);
    } while (alumno[i].dni < 10000000 || alumno[i].dni > 99999999);

    for (i = 0; i < 2; i++)
    {
        if (dn==alumno[i].dni)
        {
           
            printf("Ingrese la nueva nota: ");
            scanf("%d", &alumno[i].nota);
           
            encontrado=1;
        }
    }
    if (encontrado==0)
    {
        printf("dni inexistente\n");
    }
}

void salir ()
{
    printf("(*)Programa Finalizado gil de cuarta(*)\n");
}

void menu ()
{
    int opcion;
    
    do
    {
    printf("Bienvenido al sistema de gestion de alumnos\n");
    printf("Seleccion la opcion deseada:\n");
    printf("1- CARGAR ALUMNO\n");
    printf("2- BUSCAR ALUMNO\n");
    printf("3- MOSTRAR LISTADO DE LOS 10 ALUMNOS\n");
    printf("4- MODIFICAR NOTA\n");
    printf("5- SALIR\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case (1):
           agregar();
        break;

        case (2):
           BuscarAlumno ();
        break;

        case (3):
           mostrarTodos ();
        break;

        case (4):
           modificar ();
        break;

        case (5):
           salir ();
        break;
    }
    } while (opcion != 5);
}

int main ()
{
    menu ();
    system("PAUSE");
    return 0;
}

