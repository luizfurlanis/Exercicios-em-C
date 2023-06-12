#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[40];

    printf("Sentença: ");
    fgets(str,40,stdin);

    for(int i = str[0]; str[i] != '\0'; i = i + 2){
        printf("%c", str[i]);
    }
}