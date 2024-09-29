#include <stdio.h>
 
int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
 
    int numeroPrimo = 2;
    int auxPrimo = 2;
    int i;
    int mmc = 1;
 
    do
    {
        if (auxPrimo == 2)
        {
            if ((n1 % numeroPrimo == 0) || (n2 % numeroPrimo == 0) || (n3 % numeroPrimo == 0))
            {
                printf("%d %d %d :%d\n", n1, n2, n3, numeroPrimo);
                if (n1 % numeroPrimo == 0)
                {
                    n1 /= numeroPrimo;
                }
                if (n2 % numeroPrimo == 0)
                {
                    n2 /= numeroPrimo;
                }
                if (n3 % numeroPrimo == 0)
                {
                    n3 /= numeroPrimo;
                }
                mmc *= numeroPrimo;
            }
            else{
                auxPrimo = 0;
            }
        }
        else
        {
            auxPrimo = 0;
            numeroPrimo++;
            for (i = 1; i <= numeroPrimo; i++)
            {
                if (numeroPrimo % i == 0)
                {
                    auxPrimo++;
                }
            }
        }
    } while (n1 != 1 || n2 != 1 || n3 != 1);
 
    printf("MMC: %d", mmc);
    return 0;
}