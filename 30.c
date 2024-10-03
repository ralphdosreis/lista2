    #include <stdio.h>
     
    long long int fatorial(int numero){
            int i;
            long long int retorno = 1;
            for(i = numero; i > 0; i--){
                retorno *= i;
            }
        return retorno;
    }
     
     
    int main(){
        int l0, lf;
        scanf("%d %d", &l0, &lf);
     
        int i, j;
     
        for(i = l0; i <= lf; i++){ 
            long long int n_fatorial = fatorial(i);
            long long int pascal = 1;
     
            for (j = 0; j <= i; j++){
                long long int p_fatorial = fatorial(j);
                long long int n_p_fatorial = fatorial(i - j);
     
                pascal = n_fatorial / (p_fatorial * n_p_fatorial);
     
                if (j == 0){
                    printf("%lld", pascal);
                }
                else{
                    printf(",%lld", pascal);
                }
            }
            printf("\n");
        }
     
        return 0;
    }