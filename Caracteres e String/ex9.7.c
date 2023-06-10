#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[10];
    char strpar[10];

    for(int i = 1; i < 6; i++){
        for(int k = 1; k < 3; k++){
            printf("Par %d, palavra %d: ", i, k);
            scanf("%s", strpar);
        }
    }
}