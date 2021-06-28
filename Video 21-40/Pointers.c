#include <stdio.h>
int main()
{
    int a = 32;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    printf("The address of some garbage is %p\n", ptr2);


    return 0;
}
