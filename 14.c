#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  if (n > 0)
  {
    if ((n != 9 && n % 2 == 1) || (n == 2))
    {
      printf("PRIMO");
    }
    else
    {
      printf("NAO PRIMO");
    };
  }
  else
  {
    printf("Numero invalido!");
  }
}