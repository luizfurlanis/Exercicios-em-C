#include <stdio.h>
#include <stdlib.h>

int main (){

    int n1;

    printf("Forneca um numero menor ou igual a zero:");
    scanf("%d", &n1);

    if( n1 <= 0){
    for(int i = 0;i >= n1;i--){
        printf("%d ", i);
    }
    }else{
    printf("Valor incorreto (positivo)");
    }
    return 0;
}