#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[40];

    printf("Sentença: ");
    scanf("%c", str);

    for(int i = 0; str[i] != '\0'){
        printf("%c", str[i]);
        i = i + 2;
    }
}