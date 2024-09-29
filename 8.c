#include <stdio.h>
 
int main(){
    int matricula;
    double prova1, prova2, prova3, prova4, prova5, prova6, prova7, prova8 , lista1, lista2, lista3, lista4, lista5, trabalho;
    int presenca;
    
    while (1){
        scanf("%d", &matricula);
        
        if (matricula == -1){
            return 0;
        }
        else{
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &prova1, &prova2, &prova3, &prova4, &prova5, &prova6, &prova7, &prova8, &lista1, &lista2, &lista3, &lista4, &lista5, &trabalho, &presenca);
        
            double mediaprova = (prova1 + prova2 + prova3 + prova4 + prova5 + prova6 + prova7 + prova8) / 8.0;
            double medialista = (lista1 + lista2 + lista3 + lista4 + lista5) / 5.0;
        
            double mediafinal = (0.7 * mediaprova) + (0.15 * medialista) + (0.15 * trabalho);
        
            double frequenciaminima = 0.75 * 128.0;
        
            if ( presenca >= frequenciaminima && mediafinal >= 6.0){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, mediafinal);
            }
            else if (presenca >= frequenciaminima && mediafinal < 6.0){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, mediafinal);
            }
            else if (presenca < frequenciaminima && mediafinal >= 6.0){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, mediafinal);
            }
            else if (presenca < frequenciaminima && mediafinal < 6.0){
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, mediafinal);
            }
        }
    } 
    
    return 0;
}
 
// Matricula:4448903, Nota Final:5.33, Situacao Final:REPROVADO POR NOTA E POR FREQUENCIA
// Frequência -- 75 % de 128 = 96h