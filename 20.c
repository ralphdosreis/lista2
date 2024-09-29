#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    
    int i, j, total = 0;
    
    for (i = 1; i <= 8 ; i++){
        for (j = 1; j <= 8 ; j++){
            if (i == 1 && j == 1){ // Primeira casa 
                total += n;
            }
            else if ( i % 2 == 0){ // Linha par
                if ( j % 2 == 0){ // Casa preta
                    total += n * 2;  
                } 
                else{             // Casa branca
                    total += n; 
                }
            }
            else{ 
                if ( j % 2 == 0){ // Linha ímpar
                    total += n;  // Casa branca
                } 
                else{
                    total += n * 2; // Casa preta
                }
            }
        }
    }
    
    printf("%d", total);
    return 0;
}