#include <stdio.h>
 
int main(){
    int entrada, aux;
    scanf("%d", &entrada);
    
    int n1 = 1, n2, soma1, soma2, i, j;
    
    while(aux < entrada){
        soma1 = 0;
        soma2 = 0;
        
        for (i = 1; i <= n1 / 2; i++){
            if (n1 % i == 0){
                soma1 += i;
            }    
        }
        
        n2 = soma1;
        
        for (j = 1; j <= n2 / 2; j++){
            if(n2 % j == 0){
                soma2 += j;
            }
        }
        
        if (n1 > n2 && soma2 == n1){
            printf("(%d,%d)\n", n2, n1);
            aux++;
        }
        
        n1++;
    }
    
    return 0;
}