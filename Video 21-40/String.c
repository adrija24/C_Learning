#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while(str[i]!= '\0')
    {
       printf("%c", str[i]);
       i++; 
    }
    printf("\n");
}
int main()
{
    // char str[] = {'a','d','r','i','j','a','\0'};
    // char str[] = "adrija";   // We can use only one type of array.....
    // char str[6] = "adrija";  //This is wrong....here we should write 7....
    
    char str[34];
    gets(str);
    printf("Using custom function printstr\n");
    printstr(str);
    printf("Using puts: \n");
    puts(str);
    printf("Using printf %s\n", str);

    return 0;
}