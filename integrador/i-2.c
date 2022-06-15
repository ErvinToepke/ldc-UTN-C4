#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, n, suma = 0; // n = venta //
  int DNI, cuotas, opc1, opc2, opc3;
  float p, total;

  printf("ventas realizadas en el dia:\n");
  scanf("%d", &n);
  system("cls");

  printf("proceda a ingresar las ventas\n\n");

  for (i = 1; i <= n; i++)
  {
    printf("ingrese DNI cliente:\n");
    scanf("%d", &DNI);

    if (DNI >= 1000000 && DNI <= 99999999)
    {

      printf("Ingrese el m%ctodo de Pago:\n", 130);
      printf("1. Efectivo\n");
      printf("2. Tarjeta\n");
      scanf("%d", &opc1);

      if (opc1 == 1)
      {
        printf("Ingrese el total a pagar: ");
        scanf("%f", &p);
      }
      else if (opc1 == 2)
      {
        printf("Ingrese el total a pagar: ");
        scanf("%f", &p);
      }

      switch (opc1)
      {
      case 1:
        system("cls");
        printf("Res%cmen de pago\n", 163);
        printf("DNI: %d\n", DNI);
        printf("M%ctodo de pago: Efectivo\n", 130);
        printf("Total a pagar: %.2f\n", p);
        break;

      case 2:
        system("cls");
        printf("Elija una tarjeta\n");
        printf("1) Visa\n");
        printf("2) American Express\n");
        printf("3) Cabal\n");
        printf("4) Mercado Pago\n");
        scanf("%d", &opc2);
        printf("Ingresa la cantidad de cuotas\n");
        printf("1- Sin inter%cs\n", 130);
        printf("3- 4%c de inter%cs\n", 37, 130);
        printf("6- 8%c de inter%cs\n", 37, 130);
        printf("12- 8%c de inter%cs\n", 37, 130);
        scanf("%d", &opc3);

        switch (opc3)
        {
        case 1:
          cuotas = 1;
          break;

        case 3:
          cuotas = 3;
          p = p * 1.04;
          break;

        case 6:
          cuotas = 6;
          p = p * 1.08;
          break;

        case 12:
          cuotas = 12;
          p = p * 1.08;
          break;
        }
        switch (opc2)
        {
        case 1:
          system("cls");
          printf("Resumen de la operaci%cn:\n", 162);
          printf("DNI: %d\n", DNI);
          printf("Medio de pago: Tarjeta\n");
          printf("Tarjeta: Visa\n");
          printf("Cuotas: %d\n", cuotas);
          printf("Total: %.2f\n", p);
          break;

        case 2:
          system("cls");
          printf("Resumen de la operaci%cn:\n", 162);
          printf("DNI: %d\n", DNI);
          printf("Medio de pago: Tarjeta\n");
          printf("Tarjeta: American Express\n");
          printf("Cuotas: %d\n", cuotas);
          system("cls");
          printf("Resumen de la operaci%cn:\n", 162);
          printf("DNI: %d\n", DNI);
          printf("Medio de pago: Tarjeta\n");
          printf("Tarjeta: Cabal\n");
          printf("Cuotas: %d\n", cuotas);
          printf("Total: %.2f\n", p);
          break;

        case 4:
          system("cls");
          printf("Resumen de la operaci%cn:\n", 162);
          printf("DNI: %d\n", DNI);
          printf("Medio de pago: Tarjeta\n");
          printf("Tarjeta: Visa\n");
          printf("Cuotas: %d\n", cuotas);
          printf("Total: %.2f\n", p);
          break;

        default:
          printf("Tarjeta no v%clida\n", 160);
          system("cls");
          break;
        }
        break;
      }
    }
    else
    {
      printf("DNI invalido\n");
    }
    total = p + p;
  }
  system("cls");

  printf("total de ventas realizadas: %d\n", n);

  printf("total recuadado:%.2f\n", total);

  return 0;
}