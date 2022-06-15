#include <stdio.h>
#include <stdlib.h>

struct stock
{
    char producto[30];
    int cod_barras;
    char descripcion[100];
    int stock;
    
}productos[2];

void CargarProductos ()
{
    int i;

    for (i=0;i<2;i++)
    {
        printf("Ingrese el producto: %d\n ", (i+1));
        scanf("%s", &productos[i].producto);
    
        printf("Ingrese codigo de barras: %d\n ", (i+1));
        scanf("%d", &productos[i].cod_barras);
    
        printf("Ingrese descripcion del producto: %d\n ", (i+1));
        scanf("%s", &productos[i].descripcion);
        
        printf("Ingrese cantidad en stock: %d\n", (i+1));
        scanf("%d", &productos[i].stock); 
    }
}

void Modificarstock ()
{
    int codigo_barra, prodEncontrado=0;
    
        printf("Ingrese el codigo de barra: ");
        scanf("%d", &codigo_barra);
    
    for (int i = 0; i < 2; i++)
    {
        if (codigo_barra==productos[i].cod_barras)
        {
            
            printf("Ingrese nuevo stock: ");
            scanf("%d", &productos[i].stock);
           
            prodEncontrado=1;
        }
    }
    if (prodEncontrado==0)
    {
        printf("codigo de barra inexistente\n");
    }
}

void Mostrarproductossinstock ()
{
    printf("Mostrando los productos sin stock \n");
   for (int i = 0; i < 2; i++)
    {
        if(productos[i].stock==0)
        {
        printf("Producto: %d\n", (i+1));
        printf("nombre producto %s\n", productos[i].producto);
        printf("codigo de barras %d\n", productos[i].cod_barras);
        printf("descripcion %s\n", productos[i].descripcion);
        printf("stock %d\n", productos[i].stock);
        }
    }  
}

void Mostrarlistaprodcuto ()
{
    printf("Mostrando los productos \n");
   for (int i = 0; i < 2; i++)
    {
        printf("Producto: %d\n", (i+1));
        printf("nombre producto %s\n", productos[i].producto);
        printf("codigo de barras %d\n", productos[i].cod_barras);
        printf("descripcion %s\n", productos[i].descripcion);
        printf("stock %d\n", productos[i].stock);
    }  
}

void salir ()
{
    printf("Programa Finalizado gil de cuarta\n");
}

void menu ()
{
    int opcion;
    
    do
    {
        printf("Bienvenido al sistema de gestion de alumnos\n");
        printf("1. Cargar Productos\n");
        printf("2. Modificar stock \n");
        printf("3. Mostrar productos sin stock\n");
        printf("4. Mostrar lista prodcutos\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);

    switch (opcion)
    {
        case (1):
           CargarProductos ();
        break;

        case (2):
           Modificarstock ();
        break;

        case (3):
           Mostrarproductossinstock ();
        break;

        case (4):
           Mostrarlistaprodcuto ();
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