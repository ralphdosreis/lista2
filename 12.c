#include <stdio.h>

int main()
{
  int n, nDado, nAnt = 0, seg = 0, segAnt = 0;
  scanf("%d", &n);
  if (n > 0)
  {
    for (n; n > 0; n--)
    {
      scanf("%d", &nDado);
      if (nDado > nAnt)
      {
        seg++;
      }
      else
      {
        seg = 1;
      }
      if (seg > segAnt)
      {
        segAnt = seg;
      }
      nAnt = nDado;
    }
  }
  printf("O comprimento do segmento crescente maximo e: %d", segAnt);
  return 0;
}