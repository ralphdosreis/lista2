#include <stdio.h>
 
int main(){
    int t;
    scanf("%d", &t);
    
    int i;
    int a, b, centenaA, dezenaA, unidadeA, centenaB, dezenaB, unidadeB;
    
    for (i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        
        centenaA = a / 100;
        dezenaA = (a - ( centenaA * 100)) / 10;
        unidadeA = (a - (centenaA * 100) - (dezenaA * 10));
        
        centenaB = b / 100;
        dezenaB = (b - ( centenaB * 100)) / 10;
        unidadeB = (b - (centenaB * 100) - (dezenaB * 10));
        
        if (unidadeA > unidadeB){
            printf("%d%d%d\n", unidadeA, dezenaA, centenaA);
        }
        else if (unidadeA == unidadeB){
            if (dezenaA > dezenaB){
                printf("%d%d%d\n", unidadeA, dezenaA, centenaA);
            }
            else if (dezenaA == dezenaB){
                if (unidadeA > unidadeB){
                    printf("%d%d%d\n", unidadeA, dezenaA, centenaA);
                }
                else{
                    printf("%d%d%d\n", unidadeB, dezenaB, centenaB);
                }
            }
            else{
                printf("%d%d%d\n", unidadeB, dezenaB, centenaB);
            }
        }
        else{
            printf("%d%d%d\n", unidadeB, dezenaB, centenaB);
        }
    }
    
    return 0;
}