#include <stdio.h>

//Auto Storage class//
int myfunc(int a, int b)
{
    auto int sum;
    sum = a + b;
    return sum;
}

int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition -Declaration + space reservation
    int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);
    return 0;
}

// //External Storage Class//
// int sum;
// int myfunc(int a, int b)
// {
//     // auto int sum;
//     sum = a + b;
//     return sum;
// }

// int main()
// {
//     // int sum = myfunc(3, 5);
//     printf("The sum is %d\n", sum);
//     return 0;
// }

// //Use of Extern keyword//
// int myfunc(int a, int b)
// {
//     extern int sum;
//     return sum;
// }    
// int sum = 45;
// int main()
// {
//     int sum = myfunc(3, 5);
//     printf("The sum is %d\n", sum);
//     return 0;
// }

// //Static Storage Class//
// int myfunc(int a, int b)
// {
//    static int myVar;
//    myVar ++;
//    printf("The myVar is %d\n", myVar);
//    return myVar;
// }    
// int main()
// {
//     int myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     return 0;
// }

// //Register Storage Class//
// int myfunc(int a, int b)
// {
//    static int myVar;
//    myVar ++;
//    printf("The myVar is %d\n", myVar);
//    return myVar;
// }    
// int main()
// {
//     register int myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     myVar = myfunc(3, 5);
//     return 0;
// }