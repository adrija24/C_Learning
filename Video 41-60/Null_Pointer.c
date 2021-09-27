#include <stdio.h>
int main()
{
    int a = 34;
    int* ptr = &a;
    if (ptr != NULL)
    {
        printf("The address if a is %d\n", *ptr);
    }
    else
    {
    printf("The pointer is a null pointer and cannot be dereferenced.\n");
    }
    return 0;
}
