#include <stdio.h>
#include <string.h>

struct drivers
{
   char name[50];
   char lisense_No[50];
   char route[50];
   int kms;
};

int main()
{
    struct drivers d1, d2, d3;
    
   printf("Enter the details of the Driver No 1\n");
   printf("Enter the name of the first driver:\n");
   scanf("%s", &d1.name);

   printf("Enter the lisense_No of the first driver\n");
   scanf("%s", &d1.lisense_No);

   printf("Enter the route of the first driver\n");
   scanf("%s", &d1.route);

   printf("Enter the kms of the first driver\n");
   scanf("%d", &d1.kms);



   printf("Enter the details of the Driver No 2\n");
   printf("Enter the name of the second driver:\n");
   scanf("%s", &d2.name);

   printf("Enter the lisense_No of the second driver\n");
   scanf("%s", &d2.lisense_No);

   printf("Enter the route of the second driver\n");
   scanf("%s", &d2.route);

   printf("Enter the kms of the second driver\n");
   scanf("%d", &d2.kms);



   printf("Enter the details of the Driver No 3\n");
   printf("Enter the name of the third driver:\n");
   scanf("%s", &d3.name);

   printf("Enter the lisense_No of the third driver\n");
   scanf("%s", &d3.lisense_No);

   printf("Enter the route of the third driver\n");
   scanf("%s", &d3.route);

   printf("Enter the kms of the third driver\n");
   scanf("%d", &d3.kms);


   printf("******Printing Information of these drivers:******\n");
   printf("For Driver No 1:\nName is - %s\n", d1.name);
   printf("Lisense_No is - %s\n", d1.lisense_No);
   printf("Route is - %s\n", d1.route);
   printf("Kms is - %d\n", d1.kms);

   printf("For Driver No 2:\nName is - %s\n", d2.name);
   printf("Lisense_No is - %s\n", d2.lisense_No);
   printf("Route is - %s\n", d2.route);
   printf("Kms is - %d\n", d2.kms);

   printf("For Driver No 3:\nName is - %s\n", d3.name);
   printf("Lisense_No is - %s\n", d3.lisense_No);
   printf("Route is - %s\n", d3.route);
   printf("Kms is - %d\n", d3.kms);
   
    return 0;
}
