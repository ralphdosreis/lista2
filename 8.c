#include <stdio.h>

int main()
{
  float MP = 0.0, ML = 0.0, NT, NF, mf, np, nl;
  int mat, i, freq;
  mf = 128 * 0, 75;
  scanf("%d", &mat);
  while (mat != -1)
  {
    if (mat == -1)
      break;
    for (i = 1; i <= 8; i++)
    {
      scanf("%f", &np);
      MP += np;
    };
    MP /= 8.0;
  }
  for (i = 1; i <= 5; i++)
  {
    scanf("%f", &nl);
    ML += nl;
  };
  ML /= 5.0;
  scanf("%f %d", &NT, &freq);
  NF = 0.7 * MP + 0.15 * ML + 0.15 * NT;
  if ((NF >= 6.0) && (freq >= mf))
  {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO", &mat, &NF);
  }
  else if ((freq >= mf) && (NF < 6.0))
  {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final:  REPROVADO POR NOTA", &mat, &NF);
  }
  else if ((NF >= 6.0) && (freq < mf))
  {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final:  REPROVADO POR FREQUENCIA", &mat, &NF);
  }
  else
  {
    printf("Matricula: %d, Nota Final: %.2f, Situacao Final:  REPROVADO POR NOTA E POR FREQUENCIA", &mat, &NF);
  }
  return 0;
}