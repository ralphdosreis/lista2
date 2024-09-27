#include <stdio.h>

int main()
{
  int n, i;
  scanf("%d", &n);
  unsigned int fat = 1;
  i = n;
  while (i > 1)
  {
    fat *= i;
    i--;
  }
  printf("%d! = %u", n, fat);
  return 0;
}