// write a program to find the sum of digits of a number

#include <stdio.h>

int main()
{
  int num,r,sum=0;

  printf("enter a number");
  scanf("%d", &num);

  while(num>0)
  {
    r = num % 10;
    sum = sum + r;
    num = num / 10;
  }

  printf("sum=%d", sum);

  return 0;
}