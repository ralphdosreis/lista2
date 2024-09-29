#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    
    if (n < 0){
        printf("Numero invalido!");
        return 0;
    }
    
    int i, cont = 0;
    for (i = 1; i <= n; i++){
        if (n % i == 0){
            cont++;
        }
    }
    
    if (cont == 2){
        printf("PRIMO");
    }
    else{
        printf("NAO PRIMO");
    }
    
    return 0;
}