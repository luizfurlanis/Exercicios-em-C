#include <stdio.h>
#include <stdlib.h>

int main (){

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 5; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if((i + j) < 6){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 1; i <= 5; i++){
        for(int j = 1 ; j <= 5; j++){
            if(i==j || i<j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}