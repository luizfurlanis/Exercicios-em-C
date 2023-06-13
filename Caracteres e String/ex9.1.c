#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[30] = "essa eh uma string";

    printf("%s\n", string);

    for(int i = 0; i < 4; i++){
        if(i == 3){
            printf("%c.", string[i]);
        }
        else{
            printf("%c, ", string[i]);
        }
    }

    return 0;
}