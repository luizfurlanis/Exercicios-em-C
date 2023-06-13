#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[10];
    char strpar[10];

    for(int i = 1; i < 6; i++){
        printf("Par %d, palavra 1: ", i);
        gets(str);
        printf("Par %d, palavra 2: ", i);
        gets(strpar);
    }

    
}