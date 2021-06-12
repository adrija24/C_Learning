#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
        }
        printf("You have passed\n");
        printf("You have passed\n");
        printf("You have passed\n");
        printf("You have passed\n");
        printf("You have passed\n");
    }
    

    return 0;
}
