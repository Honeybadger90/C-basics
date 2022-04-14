#include<stdio.h>
#include<stdbool.h>

int main()

{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }

    for (int t = 10; t >= 0; t--)
    {
        printf("%d ", t);
    }
    printf("\n");
    

    int size = 10;
    int ages[] = {12, 43, 545, 3, 4, 54, 6, 7, 87, 12};
    int calculatedSize = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < calculatedSize; i++)
    {
        printf("ages[ir] = %d\n", ages[i]);
    }

    for (int r = 0; r < 10; r++)
    {
        for (int j = r; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}