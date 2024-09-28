#include <stdio.h>

int main()
{
  int n, d1, d2, combinacoes = 0;
  scanf("%d", &n);
  if (n < 3 || n > 12)
  {
    printf("Combinacao impossivel\n");
  }
  else
  {
    for (d1 = 1; d1 <= 6; d1++)
    {
      for (d2 = 1; d2 <= 6; d2++)
      {
        if (d1 != d2 && d1 + d2 == n)
        {
          printf("D1: %d, D2: %d\n", d1, d2);
          combinacoes++;
        }
      }
    }
    if (combinacoes > 0)
  {
    printf("Ha %d possibilidades", combinacoes);
  }
  else
  {
    printf("Combinacao impossivel");
  }
  }
  return 0;
}