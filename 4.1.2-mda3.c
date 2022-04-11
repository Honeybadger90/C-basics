#include<stdio.h>
#include<string.h>

int main()
{
        int rows = 3;
    int const columns = 4;
    
    int studentGrades[rows][columns] = { {1, 3, 4, 6}, {3, 2, 4, 5}, {32, 2, 4, 9}};  
    memset( studentGrades, 0, rows*columns*sizeof(int));                         
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
                
        {
            printf("%d\t", studentGrades[i][j]);
        }
        printf("\n");
    }
    return 0;
}