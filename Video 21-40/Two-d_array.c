#include <stdio.h>
int main()
{
    // Each time we can use only one type of two-d array....
    int marks[2][4] = {{12, 54, 42, 85}, {25, 36, 74, 48}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
        }
    }
    
    //To write in matrix form.....
    int marks[2][4] = {{12, 54, 42, 85}, {25, 36, 74, 48}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}
