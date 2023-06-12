#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char string[40];

    printf("String: ");
    scanf("%s", string);

    printf("%c, %c, %c, %c.", string[0], string[1], string[2], string[3]);
    
}