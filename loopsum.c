// write a program to print the sum of all number upto a given number

#include <stdio.h>

int main()
{
  int i, num, sum=0;

  printf("enter a number");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    sum = sum + i;
  }

  printf("sum of 1 to N numbers=%d", sum);

  return 0;
}
