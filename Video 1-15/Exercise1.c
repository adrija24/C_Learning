#include <stdio.h>
/*
print multiplication table of a number entered by the user in pretty form

Example:

Input:
Enter the number you want multiplication of:
6
Output:
Table of 6:
6 * 1 = 6;
6 * 2 = 12;
.
.
6 * 10 = 60;
*/

int main()
{
    int a;
    printf("Enter the number a\n");
    scanf("%d", &a);
    

    printf("Table of %d\n", a);
    printf ("1 * %d = %d\n", a, a * 1);
    printf ("2 * %d = %d\n", a, a * 2);
    printf ("3 * %d = %d\n", a, a * 3);
    printf ("4 * %d = %d\n", a, a * 4);
    printf ("5 * %d = %d\n", a, a * 5);
    printf ("6 * %d = %d\n", a, a * 6);
    printf ("7 * %d = %d\n", a, a * 7);
    printf ("8 * %d = %d\n", a, a * 8);
    printf ("9 * %d = %d\n", a, a * 9);
    printf ("10 * %d = %d\n", a, a * 10);
    
    return 0;
}
