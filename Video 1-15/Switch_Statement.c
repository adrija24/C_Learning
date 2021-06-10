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

    // Nested Switch System.......
    int marks, number_of_subject;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    printf("Enter your number of your passed subjects\n");
    scanf("%d", &number_of_subject);

    switch (marks)
    {
    case 45:
        printf("Your marks is 45\n");
        switch (number_of_subject)
        {
        case 3:
            printf("You have passed in 3 subjects"); 
            break;

        default:
            printf("Try for better result\n");
            break;
        }
        break;

    default:
        printf("You have not passed");
        break;
    }

    return 0;
}
