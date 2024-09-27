#include <stdio.h>

int main()
{
  int x, y, i = 1;
  scanf("%d %d", &x, &y);
  if (x % 2 != 0)
  {
    printf("O PRIMEIRO NUMERO NAO E PAR");
  }
  else
  {
    while (i <= y)
    {
      printf("%d ", x);
      x += 2;
      i++;
    }
  }
  return 0;
}