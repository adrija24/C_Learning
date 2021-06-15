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

//If-else Statement........
    int year;
    printf("Enter your age\n");
    scanf("%d", &year);

    if (year > 6)
    {
        printf("You can go there.\n");
    }
    else
    {
        printf("You can't go there.\n");
    }
    
      //If-else if Statement....the last 'Else' is not essential, you can only enter 'If' and
    //'Else if'......and you can also add many 'Else if'....
    
    int a;
    printf("Enter your age\n");
    scanf("%d", &a);

    if (a >= 20)
    {
        printf("You can enjoy the party.");
    }
    else if (a > 10)
        {
            printf("Your age is between 10 to 20 so you can only enjoy the events.");
        }
        else
        {
            printf("You are now kid so you can't go without parents.");
        }
    return 0;
}


