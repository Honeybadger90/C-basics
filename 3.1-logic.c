#include<stdio.h>
#include<stdbool.h>
int main()
{
    // printf("hello tim you are in the correct file");
    

    int age = 17;
    if(age > 17)
    {
        printf("This is adult\n");
    }
    else
    {
        printf("This is no adoult\n");
    }

    int age2 = 17;
    if(!(age > 17))
    {
        printf("This is adult\n");
    }
    else
    {
        printf("This is no adoult\n");
    }

    int age3 = 17;
    double money = 30000;
    if(age > 17 && money > 25000)
    {
        printf("This is true\n");
    }
    else
    {
        printf("This is false\n");
    }

    int age4 = 17;
    if(age > 17 || money > 25000)
    {
        printf("This is true\n");
    }
    else
    {
        printf("This is false\n");
    }

    int age5 = 17;
    double money2 = 30000;
    bool isGraduated = true;
    if((age > 17 && money > 25000) || isGraduated)
    {
        printf("This is true1\n");
    }
    if(age > 17 && (money > 25000 || isGraduated))
    {
        printf("This is true\n");
    }
    

    int age6 = 17;

    if (age < 12)
    {

    } else if (age >= 12 && age < 20)
    {

    }else
    {

    }

    int age7 = 17;

    if (age < 150) printf("you might be alive\n"); printf("Yep\n");


    int menuChoice = 2;

    switch (menuChoice)
    {
    case 0:
        printf("Case 0\n");
        break;
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    case 3:
        printf("Case 3\n");
        break;
    default:
        printf("Default Case \n");
        break;
    }


    double balance = -5000;
    balance > 0 ? printf("You haave money\n") : printf("No money yo\n");

    bool hasmoney;
    hasmoney = balance > 0 ? 1:0;

    printf("Has money? 1 is yes 0 is no: %d\n", hasmoney);
    return 0;
}
