#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[40];

    printf("Sentenca: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i = i + 2){
        if(str[i] == ' '){
            printf("' ', ");
        }else{
            printf("%c, ", str[i]);
        }
    }
}