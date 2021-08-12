#include <stdio.h>
// Declaring array as a Parameter in the function....

int func1(int array[])
{
    for (int i = 0; i < 5; i++) 
    {
        printf("The value at %d is %d\n", i, array [i]);
    }
     // array[0] = 382;   //Very important point that if you change any value here, it gets reflected in main()
}

//  Passing array's base address to the function.....

int func2(int* ptr)      //if you don't want any return value then you can use "void"(there you should not write "return 0")
{
    for (int i = 0; i < 5; i++) 
    {
        printf("The value at %d is %d\n", i, ptr[i]);
        // printf("The value at %d is %d\n", i, *(ptr + i));   //we can use any type of printf//
    }
    // *(ptr + 2) = 4552;    //if we want to change the value then we should call the function in main for two times// 
    return 0;
}
int main()
{
    //main part of (Declaring array as a Parameter in the function)....

    int arr[] = {2,8,5,7,6};
    func1(arr);

    //main part of (Passing array's base address to the function.....)    
       int arr[] =  {2,5,8,6,4};
       func2(arr);
    //    func2(arr);    // I call the function for the second time becase then I want to change the value//

     
    return 0;
}
