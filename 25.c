#include <stdio.h>
 
int main(){
    int n, i, j, aux = 1, aux2 = 1;
    scanf("%d", &n);
    
    for ( i = 1; i <= n; i++){
        printf("%d*%d*%d = ", i, i, i);
        
        for ( j = 1; j <= aux2; j++){
            if ( j == 1){
                printf("%d", aux);
            }
            else{
                printf("+%d", aux);
            }
            aux = aux + 2;
        }
        aux2++;
        printf("\n");
    }
    
    return 0;
}
 
//1*1*1 = 1
//2*2*2 = 3+5
//3*3*3 = 7+9+11
//4*4*4 = 13+15+17+19