#include <stdio.h>

int main()
{
  int n1, n2, n3, n4, somaMen;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  if (n1 > n2 && n1 > n3 && n1 > n4)
  {
    somaMen = n2 + n3 + n4;
  }
  else if (n2 > n1 && n2 > n3 && n2 > n4)
  {
    somaMen = n1 + n3 + n4;
  }
  else if (n3 > n1 && n3 > n2 && n3 > n4)
  {
    somaMen = n1 + n2 + n4;
  }
  else
  {
    somaMen = n1 + n2 + n3;
  }
  printf("%d", somaMen);
  return 0;
}