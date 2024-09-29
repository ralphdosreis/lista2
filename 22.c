#include <stdio.h>
#include <math.h>
 
int main(){
    int n, hip, cat1, cat2, hip_2, cat_2;
    scanf("%d", &n);
    
    for (hip = 1; hip <= n; hip++){
        for (cat1 = 1; cat1 < hip; cat1++){
            for(cat2 = 1; cat2 < hip; cat2++){
                hip_2 = pow(hip, 2);
                cat_2 = pow(cat1, 2) + pow(cat2, 2);
                if (hip_2 == cat_2 && cat1 < cat2){
                    printf("hipotenusa = %d, catetos %d e %d\n", hip, cat1, cat2);
                }
            }
        }
    }
    
    return 0;
}