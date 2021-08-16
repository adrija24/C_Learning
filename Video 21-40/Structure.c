#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[45];
}adrija, ankita, debi; //you can write this here....otherwise you can also write this in the main function(Just as there is in the main function)...

// struct Student adrija, ankita, debi;    // it is called Global variable..it can be used from any function...
// void print()
// {
//     printf("%s", adrija.name);
// }  
int main()
{
    struct Student adrija, ankita, debi;  // it is called Local variable...it cannot be used from another function...it can only use from Main function...
    adrija.id = 1;
    ankita.id = 2;
    debi.id = 3;

    adrija.marks = 466;
    ankita.marks = 456;
    debi.marks = 435;

    adrija.fav_char = 'r';
    ankita.fav_char = 'r';
    debi.fav_char = 'r';

    strcpy(adrija.name, "Sristi");

    printf("Adrija got %d marks\n", adrija.marks);
    printf("Adrija's nickname is %s\n", adrija.name);
    // print();
    return 0;
}
