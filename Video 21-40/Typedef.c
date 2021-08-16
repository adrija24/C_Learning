#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[45];
}std;   //the syntax of typedef will remain unchanged...all above 4 lines are Previous name...
int main()
{
    // int* i, j;  //if we use 'int* a, b' then computer will take 'a' as a pointer but it will take 'b' as a integer(because of '*')...so we use 'intPointer'....
    typedef int* intPointer;
    intPointer i, j;
    int k = 32;
    i = &k;
    j = &k;
    printf("%d\n", i);
    printf("%d\n", j);

    std s1, s2;
    s1.id = 34;
    s2.id = 45;
    printf("s1's id is %d\n", s1.id);
    printf("s2's id is %d\n", s2.id);

    // //typedef <previous_name> <alius_name>;   // The syntax of 'typedef'...
    
    typedef unsigned long ul;
    typedef int integer;
    ul l1, l2, l3;
    integer m = 5;
    printf("Value of a is %d\n", m);
    return 0;

}
