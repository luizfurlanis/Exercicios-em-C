#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str[10];
    int n;

    printf("Nome: ");
    scanf("%s", str);

    n = strlen(str);

    for(int i = 0; i < n; i++){
        printf("%s\n", str);
    }

    return 0;
}