#include <stdio.h>

//With arguments and without return value.... 
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
    
}
int main()
{
    printstar(2);
    return 0;
}
