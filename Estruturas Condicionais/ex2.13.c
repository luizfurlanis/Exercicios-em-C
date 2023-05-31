#include <stdio.h>
#include <stdlib.h>

int main (){

    float n1;
    float n2;
    float adp;
    float resp;

    printf("nota 1:");
    scanf("%f", &n1);

    printf("nota 2:");
    scanf("%f", &n2);

    printf("nota opativa:");
    scanf("%f", &adp);

    if(n1 > adp && n2 > adp){

        resp = (n1 + n2)/2;
        
        printf("Media: %.2f\n", resp);
    }
    else if(adp > n1 && n1 > n2){

        resp = (adp + n1)/2;
        printf("Media: %.2f\n", resp);
    }
    else if(adp > n2 && n1 > n2){

        resp = (adp + n1)/2;
        printf("Media: %.2f\n", resp);
    }
    else if(adp > n2 && n2 > n1){

        resp = (adp + n2)/2;
        printf("Media: %.2f\n", resp);
    }
    else if(adp > n1 && n2 > n1){

        resp = (adp + n2)/2;
        printf("Media: %.2f\n", resp);
    }
    if(resp > 5){
        printf("Aprovado!"); 
    }else if(resp < 5){
        printf("Reprovado...");
    }else if(resp = 5){
        printf("Exame.");
    }
    return 0;
}