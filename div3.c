// write a program to check number is divisible by 3 or not

#include <stdio.h>

int main()
{
  int num;
  
  printf("enter number");
  scanf("%d", &num);

  if(num%3==0)
{
  printf("num is divisible by 3");
}

else
{
  printf("num is not divisible by 3");
}

  return 0;
}