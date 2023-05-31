#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[100][100] = {0};
    int n;

    printf("entre com um numero de 1 a 100: ");
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Numero incorreto!");
    }else{
        for(int k = 0; k <= n/2; k++){
            for(int i = k; i < n-k; i++){
                for(int j = k; j < n-k; j++){
                    array[i][j]++;
                }
            }
        }
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n ; j++){
                if(j == 0){
                    printf("%3d", array[i][j]);
                }else{
                    printf("%4d", array[i][j]);
                }
            }
            printf("\n");
        }
    }
    

    return 0;
}