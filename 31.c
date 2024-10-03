    #include <stdio.h>
     
    int main(){
        int n, f1, f2;
        scanf("%d %d %d", &n, &f1, &f2);
        
        int i, verificador = 0, aux, novo, anterior;
        aux = f1 + f2;
        anterior = f2;
     
        for(i = 0; i < n; i++){
            scanf("%d", &novo);
            
            if ( i == 0){
                if( novo == f1){
                    printf("OK\n");
                    verificador++;
                }
                else{
                    printf("Nao e Fibonacci\n");
                    return 0;
                }
            }
            
            if ( i == 1){
                if (novo == f2){
                    printf("OK\n");
                    verificador++;
                }
                else{
                    printf("Nao e Fibonacci\n");
                    return 0;
                }
            }
            
            if ( i >= 2){
                if (aux == novo){
                    printf("OK\n");
                    verificador++;
                }
                else{
                    printf("Nao e Fibonacci\n");
                    return 0;
                }    
                
            }
            
            aux = anterior + novo;
            anterior = novo;
        }
        
        if (verificador == n){
            printf("A serie informada e de Fibonacci");
        }
        else{
            printf("Nao e Fibonacci");
        }
     
        return 0;
    }