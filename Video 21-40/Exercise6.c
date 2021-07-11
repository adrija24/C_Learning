#include <stdio.h>
int main()
{
   int i, p = 0, r = 1, s = 0;
   printf("%d is the fibonacci number of position 1\n%d is the fibonacci number of position 2\n", p, r);
   for (int i = 3; i < 43; i++)
   {
      s = p + r;
      p = r;
      r = s;
      printf("%d is the fibonacci number of position %d\n", s, i);
   }
}
