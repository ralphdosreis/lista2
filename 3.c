#include <stdio.h>

int main()
{
  int conta;
  float consumo, valor;
  char tipo;
  scanf("%d %f %c", &conta, &consumo, &tipo);
  printf("CONTA = %d\n", conta);
  if (tipo == 'C')
  {
    if (consumo <= 80)
    {
      valor = 500;
    }
    else
    {
      consumo -= 80;
      valor = 500 + consumo * 0.25;
    }
  }
  else if (tipo == 'I')
  {
    if (consumo <= 100)
    {
      valor = 800;
    }
    else
    {
      consumo -= 100;
      valor = 800 + consumo * 0.04;
    }
  }
  else
  {
    valor = 5 + consumo * 0.05;
  }
  printf("VALOR DA CONTA = %.2f\n", valor);
  return 0;
}