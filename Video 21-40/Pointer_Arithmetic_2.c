#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    // int* arrayptr = arr;
    printf("Value at position 2 of the array is %d\n", arr[2]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);
    // arr ++ (This is wrong)
    // arrayptr ++; (This is right)

    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", arr[0]);
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", arr[1]);
    printf("The value at address of second element of the array is %d\n", *(arr + 1));
    

    return 0;
}
 