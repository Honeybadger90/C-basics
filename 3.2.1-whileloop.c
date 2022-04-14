#include<stdio.h>
#include<stdbool.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("%d", i);                //WHILE LOOP

        i++;

    }
    printf("\n");

    
    int input;
    do                                  // DO WHILE LOOP
    {
        printf("Pick a number between 0-9: ");
        scanf("%d", &input);
    } while (input < 0 || input > 9);
    
    
    
    
    
    
    
    
    
    return 0;
}