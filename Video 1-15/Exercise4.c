#include <stdio.h>

int main()
{
    int temperature;
    char unit;
    printf("Enter the temperature\n");
    scanf("%d", &temperature);
    printf("Enter the type of temperature: (Enter c for celcious and Enter f for fahrenheit\n");
    //we should give a space before '%'...Otherwise scanf will take \n means new line and it will run without taking any input...
    scanf(" %c", &unit);
    
    if (unit == 'c')
    {
          printf("%f", (float)(temperature*5-32*5)/9);
                                           
        
    }
    if (unit == 'f')
    {
        printf("%f", (float)((temperature*9)/5)+32);
    }
    
    
    return 0;
}
