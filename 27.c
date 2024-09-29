#include <stdio.h>
 
int main(){
    int n, i, aux = 0;
    scanf("%d", &n);
    
    printf("%d = ", n);
    
    for ( i = 1; i <= n; i++ ){
        if ( n % i == 0 && i != n){
            if ( i == 1 ){
                printf("%d ", i);
                aux += i;
            }
            else{
                printf("+ %d ", i);
                aux += i;
            }
        }
    }
    
    if (aux == n){
        printf("= %d (NUMERO PERFEITO)", aux);
    }
    else{
        printf("= %d (NUMERO NAO E PERFEITO)", aux);
    }
    
    return 0;
}
 
//6 = 1 + 2 + 3 = 6 (NUMERO PERFEITO)
//12 = 1 + 2 + 3 + 4 + 6 = 16 (NUMERO NAO E PERFEITO)