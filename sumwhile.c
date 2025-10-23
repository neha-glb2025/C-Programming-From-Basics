// add 1 to 10 numbers using while loop

#include <stdio.h>

int main()
{
  int i=1, sum = 0;

  while(i<=10)
   {
     sum = sum + i;
     i = i + 1;
   }

   printf("sum of 1 to 10=%d", sum);

   return 0;
}