// write a program to check number is divisible by 5 or not

#include <stdio.h>

int main()
{
  int num;
  
  printf("enter number");
  scanf("%d", &num);

  if(num%5==0)
{
  printf("num is divisible by 5");
}

else
{
  printf("num is not divisible by 5");
}

  return 0;
}