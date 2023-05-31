#include <stdio.h>
#include <stdlib.h>
#include <stdbool.H>

int ehPar(int n);
int ehDivisivel(int divi, int sor);

int main(){

    int a1[5];
    int a2[5];
    
    for(int i = 0; i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &a1[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &a2[i]);
    }
    for(int i = 0; i < 5; i++){
        if(ehPar(a1[i])){
            printf("%d eh par e ", a1[i]);
        }else{
            printf("%d eh impar e ", a1[i]);
        }
        if(ehDivisivel(a1[i], a2[i])){
            printf("%d eh divisivel por %d\n", a1[i], a2[i]);
        }else{
            printf("%d nao eh divisivel por %d\n", a1[i], a2[i]);
        }
    }

    return 0;
}

int ehPar(int n){
    if(n % 2 == 0){
        return true;
    }
    return false;
}

int ehDivisivel(int divi, int sor){
    if(divi % sor == 0){
        return true;
    }
    return false;
}