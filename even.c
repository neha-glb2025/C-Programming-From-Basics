//even odd no.

#include <stdio.h>

int main()
{
  int a;

  printf("enter a no.");
  scanf("%d", &a);

  if(a%2==0)
  {
    printf("a is even no.");
  }
  else
    printf("a is odd no.");
  return 0;
}