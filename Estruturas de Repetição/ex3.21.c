#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura;

    printf("Altura:");
    scanf("%d", &altura);

    if(altura > 0){
        for(int i = 1; i <= altura; i++){
            for(int j = 1; j < (altura + i); j++){
                if((i + j) > altura){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }else{
        altura = altura * -1;

        for(int i = altura; i >= 1; i--){
            for(int j = 1; j < (altura + i); j++){
                if((i + j) > altura){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
