#include <stdio.h>

int main()
{
  float n;
  scanf("%f", &n);
  if (n < 6.0)
  {
    printf("NOTA = %.1f CONCEITO = D\n", n);
  }
  else if ((n >= 6.0) && (n < 7.5))
  {
    printf("NOTA = %.1f CONCEITO = C\n", n);
  }
  else if ((n >= 7.5) && (n < 9.0))
  {
    printf("NOTA = %.1f CONCEITO = B\n", n);
  }
  else
  {
    printf("NOTA = %.1f CONCEITO = A\n", n);
  }
  return 0;
}