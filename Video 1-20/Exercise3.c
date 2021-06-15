#include <stdio.h>
int main()
{
    char stream;
    int class;
    printf("Enter a for art's or Enter s for science or Enter c for commerce:\n");
    printf("Enter your stream\n");
    scanf("%c", &stream);

    printf("Enter your class\n");
    scanf("%d", &class);
    
    switch (stream)
    {
    case 'a':
        printf("You can attend the discussion of History\n");
        switch (class)
        {
        case 9:
            printf("This discussion is very important for you\n");
            break;
        
        default:
            printf("Only the students of class 9,10,11 and 12 can attend this discussion\n");
            break;
        }
        break;
    case 's':
        printf("You can attend the discussion of Biology\n");
        switch (class)
        {
        case 10:
            printf("This discussion is about science\n");
            break;
        
        default:
            printf("Only the students of 10,11 and 12 can attend this discussion\n");
            break;
        }
        break;
    case 'c':
        printf("You can attend the discussion of Accountancy\n");
        switch (class)
        {
        case 11:
            printf("This discussion is about commerce subjects\n");
            break;
        
        default:
            printf("Only the students of class 11 and 12 can attend this discussion\n");
            break;
        }
        break;
    
    default:
        printf("You can't attend any discussion");
        break;
    }
   
    
    return 0;
}
