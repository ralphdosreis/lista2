#include <stdio.h>
 
int main(){
    int n = 1;
    
    int verificador_intercalada = 0;
    
    int i, aux, seq1, seq2, aux1;;
    
    while(n != 0){
        scanf("%d", &n);
        
        if ( n == 0){
            return 0;
        }
        
        scanf("%d", &aux);
        scanf("%d", &aux1);
        
        if ( aux > aux1 ){
            verificador_intercalada += 2;
            aux = aux1;
            for (i = 2; i < n; i++){
                scanf("%d", &aux1);
                
                if (aux1 > aux){
                    verificador_intercalada++;
                }
                else if (aux1 < aux){
                    verificador_intercalada = 0;
                }
                else{
                    verificador_intercalada = 0;
                }
            }
        }
        else if (aux < aux1){
            verificador_intercalada += 2;
            aux = aux1;
            for (i = 2; i < n; i++){
                scanf("%d", &aux1);
                
                if (aux1 < aux){
                    verificador_intercalada++;
                }
                else if (aux1 > aux){
                    verificador_intercalada = 0;
                }
                else{
                    verificador_intercalada = 0;
                }
            }
        }
        else{
            verificador_intercalada = 0;
        }
        
        if (verificador_intercalada == n){
            printf("Intercalada\n");
        }
        else if (verificador_intercalada != n && n != 0){
            printf("Nao intercalada\n");
        }
        
        verificador_intercalada = 0;
    }
    
    return 0;
}