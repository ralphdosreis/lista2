#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    
    // Inicialização 
    while ( n <= 1){
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n);
    }
    
    int aux = n, i, primo = 2, divisores, multiplicacao = 1;
    
    printf("%d =", n);
    
    while(multiplicacao != n){
        divisores = 0;
        
        // Condição para primo --> divisores == 2
        for (i = 1; i <= primo; i++){
            if (primo % i == 0){
                divisores++;
            }
        }
        
        // Caso o divisores != 2, aumentará o valor de primo e testará o próximo valor
        if (divisores == 2){
            while(aux % primo == 0){
                aux /= primo;
                multiplicacao *= primo;
                
                if (multiplicacao == n){
                    printf(" %d", primo);
                }
                else{
                    printf(" %d x", primo);   
                }
            }
        }
        
        primo++;
    }
    
    return 0;
}