//solve question by using  precedence of operator

#include <stdio.h>

int main()
{
  int x1,x2,x3,x4,x5,x6,a=0,b=1,c=-1,x7;

  x1 = 3 * 4 + 5 * 6;
  x2 = 3 * (4 + 5) * 6;
  x3 = 3 * 4 % 5 /2;
  x4 = 3 * (4 % 5) / 2;
  x5 = 3 * ((4 % 5) / 2);
  x6= a += b -= c *= 10;
  x7 = 3 * 4 % (5 / 2);

  printf("x1=%d\n", x1);
  printf("x2=%d\n", x2);
  printf("x3=%d\n", x3);
  printf("x4=%d\n", x4);
  printf("x5=%d\n", x5);
  printf("x6=%d\n", x6);
  printf("x7=%d\n", x7);

  return 0;
}