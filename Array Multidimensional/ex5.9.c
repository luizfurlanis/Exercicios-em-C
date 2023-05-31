#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[100][100] = {0};
    int n;

    printf("entre com um numero de 1 a 100: ");
    scanf("%d", &n);

    if(n < 1 || n > 100){
        printf("Numero incorreto!");
    }
    else{

    for(int k = 0; k <= n; k++){
        for(int w = k; w < n; w++){
            for(int i = k; i < n; i++){
                for(int j = k + i; j < n; j++){
                    array[w][j]++;
                }
            }
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}