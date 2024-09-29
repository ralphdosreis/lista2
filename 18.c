#include <stdio.h>
 
int main() {
    int entrada;
    scanf("%d", &entrada);
 
    int dia = entrada / 1000000;
    int mes = (entrada % 1000000) / 10000;
    int ano = entrada % 10000;
 
    switch(mes) {
        case 1:
            if (dia > 31 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de janeiro de %d", dia, ano);
            }
            break;
        case 2:
            if (dia > 29 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de fevereiro de %d", dia, ano);
            }
            break;
        case 3:
            if (dia > 31 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de marC'o de %d", dia, ano);
            }
            break;
        case 4:
            if (dia > 30 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de abril de %d", dia, ano);
            }
            break;
        case 5:
            if (dia > 31 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de maio de %d", dia, ano);
            }
            break;
        case 6:
            if (dia > 30 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de junho de %d", dia, ano);
            }
            break;
        case 7:
            if (dia > 31 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de julho de %d", dia, ano);
            }
            break;
        case 8:
            if(dia > 31 || dia < 1) {
                printf("Data invalida!");
            }
            else {
                printf("%d de agosto de %d", dia, ano);
            }
            break;
        case 9:
            if (dia > 30 || dia < 1) {
                printf("Data invalida!");
            }
            else{
                printf("%d de setembro de %d", dia, ano);
            }
            break;
        case 10:
            if (dia > 31 || dia < 1){
                printf("Data invalida!");
            }
            else{
                printf("%d de outubro de %d", dia, ano);
            }
            break;
        case 11:
            if (dia > 30 || dia < 1){
                printf("Data invalida!");
            }
            else{
                printf("%d de novembro de %d", dia, ano);
            }
            break;
        case 12:
            if ( dia > 31 || dia < 1){
                printf("Data invalida!");
            }
            else{
                printf("%d de dezembro de %d", dia, ano);
            }
            break;
            
        default:
            printf("Data invalida!");
            break;
    }
    
    return 0;
}