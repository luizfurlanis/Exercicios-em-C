#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra1[100];
    char palavra2[100];

    for (int i = 1; i <= 5; i++) {
        fgets(palavra1, sizeof(palavra1), stdin);

        fgets(palavra2, sizeof(palavra2), stdin);

        int comprimento1 = strlen(palavra1);
        if (comprimento1 > 0 && palavra1[comprimento1 - 1] == '\n') {
            palavra1[comprimento1 - 1] = '\0';
            comprimento1--;
        }

        int comprimento2 = strlen(palavra2);
        if (comprimento2 > 0 && palavra2[comprimento2 - 1] == '\n') {
            palavra2[comprimento2 - 1] = '\0';
            comprimento2--;
        }

        int comparacao = strcmp(palavra1, palavra2);

        if (comparacao == 0) {
            printf("%s - %s: IGUAIS\n", palavra1, palavra2);
        } else if (comparacao < 0) {
            printf("%s - %s: ORDEM CRESCENTE\n", palavra1, palavra2);
        } else {
            printf("%s - %s: ORDEM DECRESCENTE\n", palavra1, palavra2);
        }
    }

    return 0;
}
