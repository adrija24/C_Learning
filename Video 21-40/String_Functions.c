#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "adrija";
    char s2[] = " roy";
    char s3[12];
     printf("The strcmp for s1, s2 returned %d\n", strcmp(s1, s2));
    // puts(strcat(s1, s2));
    printf("The length of s1 is %d\n", strlen(s1));   //if I do not comment out the 'puts' function(before) then it will count it as a concatenate character and will return the length as '10' where it should return '6'....
    printf("The length of s2 is %d\n", strlen(s2));
    printf("The reversed of s1 is: ");
    puts(strrev(s1));
    printf("The reversed of s2 is: ");
    puts(strrev(s2));
    strcpy(s3, strcat(s1, s2));
    puts(s3);
    
    return 0;
}
