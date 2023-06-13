#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[40];

    printf("Sentenca: ");
    gets(str);

    for(int i = 1; str[i] != '\0'; i = i + 2){
        if(str[i] == ' '){
            printf("' ', ");
        }else if(str[i+2] == '\0'){
            printf("%c", str[i]);
        }
        else{
            printf("%c, ", str[i]);
        }
    }

    return 0;
}