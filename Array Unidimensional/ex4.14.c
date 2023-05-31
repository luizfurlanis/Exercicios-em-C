#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10] = {0};
    int array2[10] = {0};
    int index = 0;

    for (int value = 0; value < 10; value++)
    {
        printf("array[%d]: ", value);
        scanf("%d", &array[value]);

        if (array[value] % 2 == 0)
        {
            array[value] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (array[i] != 0)
        {
            array2[index] = array[i];
            index++;
        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("array[%d] = %d\n", i, array2[i]);
    }

    return 0;
}