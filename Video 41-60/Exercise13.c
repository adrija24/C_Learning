#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A type of printing id number of one employee//
// int main()
// {
//     char *ptr;
//     int m;
//     char n;
//     printf("Id number of employee 1:\n");
//     printf("Enter your id number length\n");
//     scanf("%d", &m);
    
//     ptr =(char*) malloc(m *sizeof(int));   //we can use only 'malloc(m)'
//     printf("Enter your id number:\n");
//     scanf("%s", ptr);
//     printf("The id number of employee 1 is %s", ptr);
//     free(ptr);

//Another type of printing id number of one employee//
// int main()
// {
//      char* ptr;
//      int m;

//      printf("Id number of employee 1:\n");
//      printf("Enter your id number length\n");
//      scanf("%d", &m);

//      ptr = (char*)malloc(m * sizeof(char) + 1);

//      if (ptr == NULL) {
//          printf("Allocation faild...");
//          return 1;
//          //you can call main to try again...
//      }

//      printf("Enter your id number:\n");
//      scanf("%s", ptr);

//      //scanf is not reliable, you can use a loop to enter all characters
//      //to the char array or validate scanf.

//      printf("The id number of employee 1 is %s",ptr);
//      // dont forget to free the allocated data

//      free(ptr);

//Another type of printing id number of one employee//
// int main()
// {
//     int m; //= 5;
//     printf("Id number of employee 1:\n");
//     printf("Enter your id number length\n");
//     scanf("%d", &m);
//     char x[m];
//     char *n = x;
//     n=(char*)malloc(sizeof(char)*m);
//     printf("Enter your id number:\n");
//     scanf("%s", n);
//     printf("The id number of employee 1 is %s\n", n);
//     free(n);

//This is the actual exercise..
int main()
{
    char *ptr;
    int m;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the id number length of employee %d\n", i+1);
        scanf("%d", &m);
        ptr = (char *)malloc((m + 1) * sizeof(char));

        printf("The id number of the employee %d is\n", i+1);
        scanf("%s", ptr);
        printf("The id number of the employee %d is %s\n", i+1, ptr);
        free(ptr);
    }
    
    return 0;
}
