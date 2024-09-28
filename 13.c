#include <stdio.h>

int main()
{
  int n, p = 0, i = 0;
  float mp = 0.0, mi = 0.0;
  scanf("%d", &n);
  while (n != 0)
  {
    if (n % 2 == 0)
    {
      mp += n;
      p++;
    }
    else
    {
      mi += n;
      i++;
    }
    scanf("%d", &n);
  }
  if (p > 0)
  {
    mp /= p;
    printf("MEDIA PAR: %f\n", mp);
  }
  else
  {
    printf("MEDIA PAR: 0.000000\n");
  }
  if (i > 0)
  {
    mi /= i;
    printf("MEDIA IMPAR: %f\n", mi);
  }
  else
  {
    printf("MEDIA IMPAR: 0.000000\n");
  }
  return 0;
}