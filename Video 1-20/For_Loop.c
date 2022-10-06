// this is an example of for loop

#include <stdio.h>

int main()
{
    // Simple For loop.....
    int p;
    for (p = 0; p < 5; p++)
    {
       printf("%d\n", p);
    }
    
    // Expression 1...We can use more than one variable in expression 1..
    int i, j;
    for (i = 0, j = 0; i < 5; i++)
    {
        printf("%d %d\n", i, j);
    }

    // Expression 2...We can use more than one variable in expression 2...and the last one will be taken as a condition..but others will be executed as an statement..
    int m=0, n=0;
    for (; m = 2, n < 6; m++)
    {
        printf("%d %d\n", m, n);
        n++;
    }
    // Expression 3...We can use more than one variable...
    int r,s;
    for (r = 0, s = 0; r = 6, s < 6; r++, s++)
    {
        printf("%d %d\n", r, s);
    }
    

    return 0;
}
