#include <stdio.h>
 
int main(){
    int cC, dR, rT;
    scanf("%d %d %d", &cC, &dR, &rT);
    
    if ( cC < 7 && dR > 50 && rT > 80000){
        printf("ACO DE GRAU = 10");
    }
    else if ( cC < 7 && dR > 50 && rT <= 80000){
        printf("ACO DE GRAU = 9");
    }
    else if ( cC < 7 && dR <= 50 && rT <= 80000){
        printf("ACO DE GRAU = 8");
    }
    else{
        printf("ACO DE GRAU = 7");
    }
    
    return 0;
}