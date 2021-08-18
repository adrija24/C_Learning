#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char name[45];
};
int main()
{
    struct Student adrija, ankita, debi;

    adrija.id = 1;
    ankita.id = 2;
    debi.id = 3;

    adrija.marks = 466;
    ankita.marks = 456;
    debi.marks = 435;

    strcpy(adrija.name, "Sristi");
    strcpy(ankita.name, "Rimi");
    strcpy(debi.name, "Misti");

    printf("id of students are:\nadrija = %d, ankita = %d, debi = %d\n", adrija.id, ankita.id, debi.id);
    printf("Marks of students are:\nadrija = %d, ankita = %d, debi = %d\n",adrija.marks, ankita.marks, debi.marks);
    printf("Adrija's nickname is %s\n", adrija.name);
    printf("Ankita's nickname is %s\n", ankita.name);
    printf("Debi's nickname is %s\n", debi.name);

    return 0;
}

