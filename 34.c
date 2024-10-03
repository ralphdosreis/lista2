    #include<stdio.h>
     
    int MDC(int a, int b){
        while(b!=0){
            int tmp= a%b;
            a= b;
            b= tmp;
        }
        return a;
    }
     
    int main(){
        double n;
        int numerador, denominador, divisor_comum;
        scanf("%lf", &n);
     
        denominador=1;
     
        while(n != (int)n){
            n*=10;
            denominador*=10;
        }
     
        numerador=(int)n;
        
        divisor_comum= MDC(numerador, denominador);
     
        numerador /= divisor_comum;
        denominador /= divisor_comum;    
     
        printf("%d/%d\n", numerador, denominador);
         return 0;
    }