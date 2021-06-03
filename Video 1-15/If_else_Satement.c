#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("You have entered %d as your age\n", age);
    if (age > 18)
    {
        printf("You can vote!\n");
    }

    int year;
    printf("Enter your age\n");
    scanf("%d", &year);

    if (year > 6)
    {
        printf("You can go there.");
    }
    else
    {
        printf("You can't go there.");
    }
    
       
    
    
    
    return 0;
}













