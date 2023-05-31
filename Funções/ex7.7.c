#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(){

    for(int i = 1; i <= 20; i++){

        ehPrimo(i);

        if(ehPrimo(i)){
            printf("%d: eh primo\n", i);
        }else{
            printf("%d: nao eh primo\n", i);
        }
    }
}

bool ehPrimo(int n){

    int cont = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    if(cont == 2){
        return true;
    }else{
        return false;
    }
}