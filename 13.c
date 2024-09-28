#include <stdio.h>

int main()
{
  int n, p, i;
  float mp, mi;
  while (n != 0)
  {
    scanf("%d", &n);
    if ((n % 2 == 0) && (n != 0))
    {
      mp += n;
      p++;
    }
    else if ((n % 2 != 0) && (n != 0))
    {
      mi += n;
      i++;
    }
  }
  mp /= p;
  mi /= i;
  printf("MEDIA PAR: %f\n", mp);
  printf("MEDIA IMPAR: %f", mi);
  return 0;
}