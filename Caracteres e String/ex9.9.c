#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[50];
    char invstr[50];
    char temp;
    int tam;

    printf("String: ");
    gets(str);

    tam = strlen(str);

    for(int i = 0; str[i] != '\0'; i++){
        invstr[tam - i] = str[i];
    }

    printf("%s", invstr);
}