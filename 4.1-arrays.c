#include<stdio.h>
#include<stdbool.h>

int main()

{
    int size = 8;
    int ages [] = {1, 4, 60, 43, 54, 3, 90, 21};
    // int ages[10];
    // first element - index 0
    // 0-9 9=10th element

    // assignement of elements for each single one ages[4] = 65;


    for (int i = 0; i < size; i++) // print an array
    {
        printf("%d ", ages[i]);
    }
    
    printf("\n");
    ages [3] = 60;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ages[i]);
    }
    return 0;
}