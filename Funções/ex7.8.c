#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int saoAmigos(int n1, int n2);

int main(){
    
    int n1[5];
    int n2[5];

    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    for(int i = 0; i < 5; i++){
        if(saoAmigos(n1[i], n2[i])){
            printf("%d e %d sao amigos\n", n1[i], n2[i]);
        }else{
            printf("%d e %d nao sao amigos\n", n1[i], n2[i]);
        }
    }
    return 0;
}

int saoAmigos(int n1, int n2){

    int soma1 = 0;
    int soma2 = 0;

    for(int i = 1; i < n1; i++){
        if(n1 % i == 0){
            soma1 = soma1 + i;
        }
    }

    for(int i = 1; i < n2; i++){
        if(n2 % i == 0){
            soma2 = soma2 + i;
        }
    }

    if(soma1 == n2 && soma2 == n1){
        return true;
    }else{
        return false;
    }
}