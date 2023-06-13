#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void tornarMaiuscula(char *str);
int main(){
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);

    tornarMaiuscula(string);

    printf("%s", string);
}

void tornarMaiuscula(char *str){
    for(int i = 0; i < strlen(str); i++){
        str[i] = toupper(str[i]);
    }
}