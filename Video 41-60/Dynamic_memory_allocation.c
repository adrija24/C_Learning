#include <stdio.h>
#include <stdlib.h>   //for Dynamic memory allocation we should use '<stdlib.h>'....

int main()
{
    // //Use of malloc
    int* ptr;
    int m;
    printf("Enter the size of the array you want to create:\n");
    scanf("%d", &m);
    ptr = (int*) malloc(m * sizeof(int));
    for (int i = 1; i <= m; i++)     
    {
        printf("Enter the number %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr);     //free() can be used in the middle of the program or at the end of the program to free the memory

    //Use of calloc
    int* pointer;
    int n;
    printf("Enter the size of the array you want to create:\n");
    scanf("%d", &n);
    pointer = (int*) calloc(n, sizeof(int));
    for (int i = 1; i <= n; i++)     
    {
        printf("Enter the number %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }
    

    //Use of realloc
    printf("Enter the size of the new array you want to create:\n");
    scanf("%d", &n);
    ptr = (int*) realloc(ptr, n * sizeof(int));
    for (int i = 1; i <= n; i++)     
    {
        printf("Enter the new number %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }


    //Use of free
    free(ptr);
    return 0;
}
 