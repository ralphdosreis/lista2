// a < b < c
 
#include <stdio.h>
 
int main(){
    int n1, n2, n3;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    
    char l1, l2, l3;
    scanf("%c%c%c", &l1, &l2, &l3);
    
    // Ordenando a entrada para n1 > n2 > n3
    int temp;
    if (n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 < n3){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 < n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
 
    //n1 = C, n2 = B, n3 = A
    if ((l1 == 'A') && (l2 == 'B') && (l3 == 'C')){
        printf("%d %d %d\n", n3, n2, n1);
    }
    else if ((l1 == 'A') && (l2 == 'C') && (l3 == 'B')){
        printf("%d %d %d\n", n3, n1, n2);
    }
    else if ((l1 == 'B') && (l2 == 'A') && (l3 == 'C')){
        printf("%d %d %d\n", n2, n3, n1);
    }
    else if ((l1 == 'B') && (l2 == 'C') && (l3 == 'A')){
        printf("%d %d %d\n", n2, n1, n3);
    }
    else if ((l1 == 'C') && (l2 == 'A') && (l3 == 'B')){
        printf("%d %d %d\n", n1, n3, n2);
    }
    else if ((l1 == 'C') && (l2 == 'B') && (l3 == 'A')){
        printf("%d %d %d\n", n1, n2, n3);
    }
 
    return 0;
}