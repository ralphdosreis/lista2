#include <stdio.h>

int main()
{
  unsigned long int a, b;
  int anos = 0;
  scanf("%lu", &a);
  scanf("%lu", &b);
  while (a <= b)
  {
    a += (a * 0.03);
    b += (b * 0.015);
    anos++;
  }
  printf("ANOS = %d", anos);
  return 0;
}