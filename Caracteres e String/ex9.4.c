#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char str[40];

    printf("Sentenca: ");
    scanf("%c", str);

    for(int i = 1; str[i] != '\0';){
        printf("%c", str[i]);
        i = i + 2;
    }
}
