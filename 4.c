#include <stdio.h>

int main()
{
  int n, i = 1;
  double fah, cel;
  scanf("%d", &n);
  while (i <= n)
  {
    scanf("%lf", &fah);
    cel = (5 * (fah - 32)) / 9;
    printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fah, cel);
    i++;
  }
  return 0;
}