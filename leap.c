#include <stdio.h>

int main()
{
  int a;

  printf("enter a no.");
  scanf("%d", &a);

  if(a%4==0)
  {
    printf("a is leap year");
  }
  else
  {
    printf("a is not leap year");
  }
  return 0;

  }
  