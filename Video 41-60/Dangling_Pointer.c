#include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a, b, sum;
    a = 24;
    b = 34;
    sum = a + b;
    return &sum;
}
int main()
{
    // case 1: De allocation of a memory block
    int* ptr = (int *) malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 34;
    ptr[2] = 34;
    ptr[3] = 34;
    free(ptr); // ptr is now a dangling pointer

    //case 2: Function returning local variable address
    int* dangPtr = functionDangling();  // dangPtr is now a dangling pointer

    // case 3:If a variable goes out of scope
    int * danglingPtr3;
    {
        int a =12;
        danglingPtr3 = &a;
    }
    // Here variable 'a' goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer
    

    return 0;
}
