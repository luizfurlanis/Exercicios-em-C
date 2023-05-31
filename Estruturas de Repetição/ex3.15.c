#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1;
    int produtorio = 1;

    printf("Numero:");
    scanf("%d", &n1);

    if(n1 < 0){
        printf("Nao ha fatorial de numero negativo.");

    }else{
        for(int i = n1; i >= 1; i--){
            produtorio = produtorio * i;
        }
        printf("%d! = %d", n1, produtorio);
    }
}