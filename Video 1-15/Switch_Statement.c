#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("The age is 1\n");
        break;
    case 2:
        printf("The age is 2\n");
        break;
    case 3:
        printf("The age is 3\n");
        break;
    
    default:
        printf("Your age is not 1,2 or 3\n");
        break;
    }



    return 0;
}
