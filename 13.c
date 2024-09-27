#include <stdio.h>

int main()
{
  int n, p = 0, i = 0;
  float mp = 0.0, mi = 0.0;
  while (n != 0)
  {
    scanf("%d", &n);
    if (n % 2 == 0)
    {
      p++;
      mp += n;
    }
    else
    {
      mi += n;
      i++;
    }
    mp /= p;
    mi /= i;
  }
  printf("%d\n", i);
  printf("MEDIA PAR: %f\n", mp);
  printf("MEDIA IMPAR: %f", mi);
  return 0;
}