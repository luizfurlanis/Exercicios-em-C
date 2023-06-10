#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main (){
    char str1[10];
    char str2[10];
    char str3[10];

    printf("String 1: ");
    scanf("%s", str1);

    printf("String 2: ");
    scanf("%s", str2);

    printf("String 3: ");
    scanf("%s", str3);

    printf("%s, %s e %s", str1, str2, str3);
}