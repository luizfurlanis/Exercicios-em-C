#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[3] [2];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("array[%d] [%d]", i, j);
            scanf("%d", &array[i] [j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 1; j++){
            printf("%03d", array[i][j]);
        }
        printf(" ");
        for(int j = 1; j < 2; j++){
            printf("%03d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}