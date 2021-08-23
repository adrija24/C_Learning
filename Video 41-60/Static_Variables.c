#include <stdio.h>

int b = 45;
int func1(int b1)
{
    static int myvar = 43;  //if we don't give any value here then the compiler will automatically take the value '0'..Static does not call any function..
    printf("The vlue of myvar is %d\n", myvar);
    myvar ++;
    return b1 + myvar;
}
int main()
{
    int b = 322;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    
    return 0;
}
