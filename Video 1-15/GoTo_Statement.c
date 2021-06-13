#include <stdio.h>

int main()
{
    // this is the general use of GoTo Statement..but we should avoid to use it...
    // label:
    //    printf("We are inside label");
    //    goto end;
    //    printf("Hello World\n");
    //    goto label;
    //    end:
    //        printf("We are at end");

        //This is the perfect use of GoTo Statement....
        
        int num;
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", i);
            for (int j = 0; j < 8; j++)
            {
                printf("Enter the number. Enter 0 to exit\n");
                scanf("%d", &num);
                if (num==0)
                {
                    goto end;
                }
                
            }
            
        }
        end:
            
    return 0;
}
               