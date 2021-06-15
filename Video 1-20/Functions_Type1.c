#include <stdio.h>
// Function type = With arguments and with return value..
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("The sum is %d\n", c);

    return 0;
}
