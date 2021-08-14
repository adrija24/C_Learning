#include <stdio.h>
#include <string.h>
int main()
{
    char s1[45], s2[56];
    printf("Enter two names who are friends\n");
    scanf("%s %s",&s1, &s2);
    char s3[] = " is a friend of ";
    
    puts(strcat(strcat(s1, s3), s2));
    return 0;
}
