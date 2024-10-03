    #include <stdio.h>
     
    int main(){
        int ns, cod_uf;
        scanf("%d %d", &ns, &cod_uf);
        
        if (cod_uf > 28){
            printf("CODIGO DA UF INVALIDO!\n");
            return 0;
        }
        
        // Tratamento NS
        int d1 = ns / 10000000;
        int d2 = ns % 10000000 / 1000000;
        int d3 = ns % 1000000 / 100000;
        int d4 = ns % 100000 / 10000;
        int d5 = ns % 10000 / 1000;
        int d6 = ns % 1000 / 100;
        int d7 = ns % 100 / 10;
        int d8 = ns % 10;
        
        // Descobrindo primeiro dígito DV
        int dv1 = (d1 * 2) + (d2 * 3) + (d3 * 4) + (d4 * 5) + (d5 * 6) + (d6 * 7) + (d7 * 8) + (d8 * 9);
        dv1 = dv1 % 11;
        
        if (dv1 == 10){
            dv1 = 0;
        }
        
        // Tratamento UF
        int uf1 = cod_uf / 10;
        int uf2 = cod_uf % 10;
        
        // Descobrindo segundo dígito DV
        int dv2 = (uf1 * 7) + (uf2 * 8) + (dv1 * 9);
        dv2 = dv2 % 11;
        
        if (dv2 == 10){
            dv2 = 0;
        }
        
        // Saída
        printf("%d", ns);
        
        if ( cod_uf < 10){
            printf("0");
        }
        
        printf("%d/%d%d", cod_uf, dv1, dv2);
        
        return 0;
    }