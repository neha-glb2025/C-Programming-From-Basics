// write a program to check whether a number is armstrong or not

#include <stdio.h>
#include <math.h>

int main()
{
  int i, r, n,c=0, num,sum=0,num1;

  printf("enter a number");
  scanf("%d", &n);

  num = n;

  while(n>0)
{
    r = n /10;
  c++;
}

num1 = num;

while(num>0)
{
  r = num % 10;
  sum = sum + pow(r, c);
  num = num / 10;
}

if(sum==num)
{
  printf("armstrong");
}

else
{
  printf("not armstrong");
}

return 0;
}