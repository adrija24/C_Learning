#include <stdio.h>
int main(int argc, char const *argv[])
{
    char math, science;
    printf("Write 'y' for 'yes' and 'n' for 'no'.\n");
    printf("Did you pass in math and science?(Input example:y y)\n");
    scanf("%c %c", &math, &science);

    if (math == 'y' && science == 'y')
    {
        printf("You will win a gift of 45 rupees");
    }
    else if (math == 'y' || science == 'y')
    {
        printf("You will win a gift of 15 rupees");
    }
    else
    {
        printf("Sorry you have not pass in any subject");
    }
    
    return 0;
}

