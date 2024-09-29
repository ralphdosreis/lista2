#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    
    int i;
    double numerador, denominador, e = 0;
    
    numerador = 1;
    denominador = 1;
    e += numerador / denominador;
    
    for ( i = 1; i <= n; i++){
        numerador = pow(x, i);
        denominador *= i;
        
        e += numerador / denominador;
    }
    
    printf("e^%.2lf = %.6lf", x, e);
    
    return 0;
}