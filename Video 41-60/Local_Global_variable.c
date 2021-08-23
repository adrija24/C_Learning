#include <stdio.h>

int b = 45;               //This is a Global variable since it is declared inside main().....
int func1(int b1)         //This is a Local variable inside func1 function....we can only use it inside this function.....
{
    int loc = 53;
    printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 * 10;
}
int main()
{
    int b = 34;          // This is also a Local variable inside main()..
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    int *ptr = &val;
    //printf("%d", loc);  //We cannot print this in main function...because it is a local variable inside func1..
    printf("The value of func1 is %d", val);
    return 0;
}
