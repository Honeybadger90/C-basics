#include<stdio.h>
#include<string.h>

int main()
{
    printf("When you wanna gain access, tell me your name!\nWhat's your name?\t");
    const char name[20] ;
    scanf("%s", name);
    while(strcmp(name, "Tim") != 0 )
    {
        printf("You dont have access, ask someone who has ;)");
        printf("\n");
        printf("who do you brought with you?\t ");
        scanf("%s", name);

    }
    if(strcmp(name, "Tim") == 0 )
    {
        printf("You got access!\n");
    }


    return 0;
}