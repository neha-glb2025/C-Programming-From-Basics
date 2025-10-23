// write a program to find a to the power b and a,b can be any number given by user

#include <stdio.h>

int main()
{
  int i, a, b,c=1;

  printf("enter any two number");
  scanf("%d%d", &a, &b);

  for (i = 1; i <= b;i++)

  {
    c =c * a;
    
  }

  printf("ans=%d", c);

  return 0;
}