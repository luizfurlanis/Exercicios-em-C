#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void tornarMinuscula(char *str);

int main(){
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);

    tornarMinuscula(string);

    printf("%s", string);
}

void tornarMinuscula(char *str){
    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }
}