#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main (){
    char str[10];

    printf("Nome: ");
    gets(str);

    for(int i = 0; i < 5; i++){
        printf("%s\n", str);
    }

    return 0;
}