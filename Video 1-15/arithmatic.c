#include <stdio.h>

int main()
{
    /* code */
   int a, b;
   a= 34;
   b= 6;

   //Arithmatic operators by %d........
   printf("a + b =%d\n", a+b);
   printf("a - b =%d\n", a-b);
   printf("a * b =%d\n", a*b);
   printf("a / b =%d\n", a/b);

   //Arithmatic operators by %f.....
   int p;
   float r;
   p = 34;
   r = 6.34;

   printf("p + r = %f\n", p+r);
   printf("p - r = %f\n", p-r);
   printf("p * r = %f\n", p*r);
   printf("p / r = %f\n", p/r);

   //Relational operator.....
   int m, n;
   m = 34;
   n = 34;
    printf("m == n = %d\n", m==n);


   //Logical AND Operator.......
   int g, f;
   g = 45;
   f = 6;
    printf("g && f = %d\n", g&&f);

    //Logical OR Operator.......
    int s, t;
    s = 46;
    t = 34;
    
    printf("s || t = %d\n", s||t);

    //Logical NOT Operator.......
    int j, k;
    j = 40;
    k = 34;

    printf("j ! k = %d\n", !k);

    

   
   
   
    return 0;
}
