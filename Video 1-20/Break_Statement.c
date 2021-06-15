#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 10; i ++)
    {
        printf("%d\n", i);
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
    }

    return 0;
}
