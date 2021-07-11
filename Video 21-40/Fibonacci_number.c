#include <stdio.h>
int main()
{
    long long a, b, p;
    int c;
    printf("Enter two numbers of Fibonacci series:\n");
    scanf("%lld %lld", &a, &b);
    printf("Enter the range of Fibonacci series:\n");
    scanf("%d", &c);
    printf("The fibonacci series is:\n%lld\n%lld\n", a, b);
    
    for (int i = a; i < c; i++)
    {
        p = a + b;
        a = b;
        b = p;
        printf("%lld\n", p);
    }
    
    return 0;
}
