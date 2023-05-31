#include <stdio.h>
#include <stdlib.h>

float maiorNumero(float n1, float n2);

int main(){

    float a1[5] = {0};
    float a2[5] = {0};
    float maior;

    for(int i = 0; i < 5; i++){
        do{
            if(a1[i] < 0){
                printf("Entre com um valor positivo!\n");
            }
            printf("n1[%d]: ", i);
            scanf("%f", &a1[i]);
        } while(a1[i] <= 0);

        do{
            if(a2[i] < 0){
                printf("Entre com um valor positivo!\n");
            }
            printf("n2[%d]: ", i);
            scanf("%f", &a2[i]);
        } while(a2[i] <= 0);
    }

    for(int i = 0;i < 5; i++){
        maior = maiorNumero(a1[i], a2[i]);
        if(maior != -1){
            printf("%.2f, %.2f: O maior valor e %.2f\n", a1[i], a2[i], maior);
        }else{
            printf("%.2f, %.2f: Eles sao iguais\n", a1[i], a2[i]);
        }
    }

    return 0;
}

float maiorNumero(float n1, float n2){
    if(n1 > n2){
        return n1;
    }else if(n2 > n1){
        return n2;
    }else{
        return -1;
    }
}