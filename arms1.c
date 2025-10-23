// write a program to check whether a three digit number is armstrong or not

#include <stdio.h>

int main()
{
  int n, r, sum = 0,num;

  printf("enter any number");
  scanf("%d", &n);

  num = n;
  while(n>0)
  {
    r = n % 10;
    sum = sum + r * r * r;
    n = n / 10;
  }

  if(sum==num)
    printf("armstrong");
    else
      printf("not armstong");

    return 0;
  }
