// #include <stdio.h>

// int main()
// {
//   float MP = 0.0, ML = 0.0, NT, NF, mf, np, nl;
//   int mat, i, freq;
//   mf = 128 * 0.75;
//   scanf("%d", &mat);
//   while (mat != -1)
//   {
//     MP = 0.0;
//     ML = 0.0;
//     // if (mat == -1)
//     //   break;
//     for (i = 1; i <= 8; i++)
//     {
//       scanf("%f", &np);
//       MP += np;
//     };
//     MP /= 8.0;
//   }
//   for (i = 1; i <= 5; i++)
//   {
//     scanf("%f", &nl);
//     ML += nl;
//   };
//   ML /= 5.0;
//   scanf("%f %d", &NT, &freq);
//   NF = 0.7 * MP + 0.15 * ML + 0.15 * NT;
//   if ((NF >= 6.0) && (freq >= mf))
//   {
//     printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO", mat, NF);
//   }
//   else if ((freq >= mf) && (NF < 6.0))
//   {
//     printf("Matricula: %d, Nota Final: %.2f, Situacao Final:  REPROVADO POR NOTA", mat, NF);
//   }
//   else if ((NF >= 6.0) && (freq < mf))
//   {
//     printf("Matricula: %d, Nota Final: %.2f, Situacao Final:  REPROVADO POR FREQUENCIA", mat, NF);
//   }
//   else
//   {
//     printf("Matricula: %d, Nota Final: %.2f, Situacao Final:  REPROVADO POR NOTA E POR FREQUENCIA", mat, NF);
//   }
//   return 0;
// }


#include <stdio.h>

int main() {
    int matricula, i, freq;
    float notas_provas[8], notas_listas[5], nota_trabalho, MP, ML, NT, NF;
    const int carga_horaria = 128; // Carga horária total
    const float frequencia_minima = 0.75 * carga_horaria; // 75% da carga horária
    
    scanf("%d", &matricula);

    while (matricula != -1) {
        // Resetando os valores de MP e ML para cada aluno
        MP = 0.0;
        ML = 0.0;

        // Leitura das 8 notas das provas
        for (i = 0; i < 8; i++) {
            scanf("%f", &notas_provas[i]);
            MP += notas_provas[i];
        }
        MP /= 8.0; // Média das provas

        // Leitura das 5 notas das listas
        for (i = 0; i < 5; i++) {
            scanf("%f", &notas_listas[i]);
            ML += notas_listas[i];
        }
        ML /= 5.0; // Média das listas

        // Leitura da nota do trabalho final
        scanf("%f", &nota_trabalho);

        // Leitura da frequência do aluno (em horas)
        scanf("%d", &freq);

        // Cálculo da Nota Final
        NT = nota_trabalho;
        NF = 0.7 * MP + 0.15 * ML + 0.15 * NT;

        // Determinação da situação final do aluno
        if (NF >= 6.0 && freq >= frequencia_minima) {
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", matricula, NF);
        } else if (freq < frequencia_minima && NF < 6.0) {
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, NF);
        } else if (freq < frequencia_minima) {
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, NF);
        } else if (NF < 6.0) {
            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", matricula, NF);
        }

        // Leitura da próxima matrícula
        scanf("%d", &matricula);
    }

    return 0;
}
