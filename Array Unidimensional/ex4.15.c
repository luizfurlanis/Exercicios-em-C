#include <stdio.h>
#include <stdlib.h>

int main(){
    int array1[5];
    int array2[5];
    int arrayInterseccao[5] = {0};

    printf("Forneca os valores do primeiro array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\tarray1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Forneca os valores do segundo array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\tarray2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array1[i] == array2[j])
            {
                int alreadyInserted = 0;
                for (int k = 0; k < count; k++)
                {
                    if (arrayInterseccao[k] == array1[i])
                    {
                        alreadyInserted = 1;
                        break;
                    }
                }
                if (!alreadyInserted)
                {
                    arrayInterseccao[count++] = array1[i];
                }
            }
        }
    }
    if (count == 0)
    {
        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!\n");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);
        }
    }
    return 0;
}
