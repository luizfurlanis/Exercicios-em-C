#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10] = {0};
    int array2[10] = {0};
    int posi;

    for (int value = 0; value < 10; value++)
    {
        printf("array[%d]: ", value);
        scanf("%d", &array[value]);
    }

    do
    {
        printf("Posicao a ser removida (0 a 9): ");
        scanf("%d", &posi);
        if (posi > 9 || posi < 0)
        {
            printf("Posicao invalida, forneca novamente!\n");
        }
    } while (posi > 9 || posi < 0);

    for (int i = posi; i < 9; i++)
    {
        array2[i] = array[i + 1];
        array[i] = array2[i];
    }

    for (int i = 0; i < 9; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}