#include <stdio.h>
#include <stdlib.h>

int ehTriangulo(int ladoA, int ladoB, int ladoC);
int lePositivo();

int main(){
    
    int ladoA[5];
    int ladoB[5];
    int ladoC[5];

    for(int i = 0; i < 5; i++){
        do{
            if(ladoA[i] < 0){
                lePositivo();
            }else{
            printf("ladoA[%d]: ", i);
            }
            scanf("%d", &ladoA[i]);
        }while(ladoA[i] < 0);
        do{
            if(ladoB[i] < 0){
                lePositivo();
            }else{
            printf("ladoB[%d]: ", i);
            }
            scanf("%d", &ladoB[i]);
        }while(ladoB[i] < 0);
        do{
            if(ladoC[i] < 0){
                lePositivo();
            }else{
            printf("ladoC[%d]: ", i);
            }
            scanf("%d", &ladoC[i]);
        }while(ladoC[i] < 0);
    }

    for(int i =0; i < 5; i++){
        if(ehTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 1){
            printf("Valores %d, %d e %d: triangulo equilatero\n", ladoA[i], ladoB[i], ladoC[i]);
        }
        else if (ehTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 0){
            printf("Valores %d, %d e %d: nao formam um triangulo\n", ladoA[i], ladoB[i], ladoC[i]);
            }
    
        else if (ehTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 2){
            printf("Valores %d, %d e %d: triangulo isosceles\n", ladoA[i], ladoB[i], ladoC[i]);
        }
        else if(ehTriangulo(ladoA[i], ladoB[i], ladoC[i]) == 3){
            printf("Valores %d, %d e %d: triangulo escaleno\n", ladoA[i], ladoB[i], ladoC[i]);
        }
    }
    return 0;
}

int lePositivo(){
    printf("Entre com um valor positivo: ");
}

int ehTriangulo(int ladoA, int ladoB, int ladoC){

    if(ladoA >= ladoB + ladoC || ladoB >= ladoA + ladoC || ladoC >= ladoB + ladoA){
        return 0;
    }
    if(ladoA == ladoB && ladoB == ladoC){
        return 1;
    }
    if(ladoA == ladoB || ladoB == ladoC || ladoC == ladoB){
        return 2;
    }
    return 3;
}