#include <stdio.h>

int main()
{
  int n1, n2, n3, concat, quad;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  if ((n1 > 9) || (n2 > 9) || (n3 > 9))
  {
    printf("DIGITO INVALIDO");
  }
  else
  {
    concat = n1 * 100 + n2 * 10 + n3;
    quad = concat * concat;
    printf("%d, %d", concat, quad);
  }
  return 0;
}