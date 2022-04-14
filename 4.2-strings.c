#include<stdio.h>
#include<string.h>

int main()
{   
    printf("Whats your name? ");

    char name[20]; // '\0'
    scanf("%19s", name);

    int letter = 0;
    while(name[letter] != '\0')
    {
        letter++;

    }

    //printf("Size of name is %d\n", letter);

    //printf("Size of name is %lu\n", strlen(name));


    if(strcmp(name, "Tim") == 0)
    {
        printf("You get access!\n");

    }
        if(strcmp(name, "Tim") != 0)
        {
            printf("You dont have access, ask someone who has ;)");
        }
    
    char copy[20];
    strcpy(copy, name);
    printf("Copy of name is: %s\n", copy);


    char lastName [] = "Bo";
    strcat(copy, lastName);
    printf("Full name; %s\n", copy);
    return 0;
}
