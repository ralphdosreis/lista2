#include <stdio.h>

int main()
{
  float n1, n2, n3, med;
  scanf("%f %f %f", &n1, &n2, &n3);
  med = (n1 + n2 + n3) / 3;
  printf("MEDIA = %.2f\n", med);
  if (med >= 6)
  {
    printf("APROVADO");
  }
  else
  {
    printf("REPROVADO");
  }
  return 0;
}