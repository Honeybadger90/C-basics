#include<stdio.h>


int main()
{
    int rows = 3;
    int const columns = 4;
    int studentGrades[][columns] = {
                            {1, 3, 4, 6},
                            {3, 2, 4, 5},
                            {32, 2, 4, 9}
                            };  //atleast columns is required
                                //in declaration

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < columns; k++)
        {
            printf("%d\t", studentGrades[i][k]);
        }
        printf("\n");
    }
    return 0;
}