#include <stdio.h>

void valuechange(int* sum, int* sub)
{
    *sum = 5 + 2;
    *sub = 5 - 2;
}
int main()
{
    int a = 5, b = 2;
    printf("The value of 'a' is %d and the value of 'b' is %d\n", a,b);
    valuechange(&a,&b);
    printf("The value of 'a' is now %d and the value of 'b' is now %d\n", a,b);

    return 0;
}
