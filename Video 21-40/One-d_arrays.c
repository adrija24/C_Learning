#include <stdio.h>
int main()
{
    //Each time we can run only one programe.....
    // One dimentional array....
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
        
    }
//Another type of One dimentional array.....
    int age[5] = {12,52,45,63,25};
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element of the array is %d\n", i, age[i]);
    }
    

    return 0;
}
 