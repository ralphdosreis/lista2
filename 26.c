#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    
    int d1, d2, d3, d4, d5;
    
    d1 = n / 10000;
    d2 = n % 10000  / 1000;
    d3 = n % 1000 / 100;
    d4 = n % 100 / 10;
    d5 = n % 10;
    
    if ( n > 99999){
        printf("NUMERO INVALIDO\n");
        return 0;
    }
    
    if ( n < 10){ // 1 dígito
        printf("PALINDROMO\n");
    }
    else if (n <= 99 && n >= 10){ // 2 dígitos
        if (d5 == d4){
            printf("PALINDROMO\n");
        }
        else{
            printf("NAO PALINDROMO\n");
        }
    }
    else if ( n >= 99 && n <= 999){ // 3 dígitos
        if (d3 == d5){
            printf("PALINDROMO\n");
        }
        else{
            printf("NAO PALINDROMO\n");
        }
    }
    else if ( n > 999 && n <= 9999){
        if (d2 == d5 && d3 == d4){
            printf("PALINDROMO\n");
        }
        else{
            printf("NAO PALINDROMO\n");
        }
    }
    else if ( n > 9999){
        if (d1 == d5 && d2 == d4){
            printf("PALINDROMO\n");
        }
        else{
            printf("NAO PALINDROMO\n");
        }
    }
    
    return 0;
}