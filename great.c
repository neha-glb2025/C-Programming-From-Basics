// greatest three no

#include <stdio.h>

int main()
{
  int a, b, c;

  printf("enter three no.");
  scanf("%d%d%d", &a, &b, &c);

  if(a>b)
  {
    printf("a is greater b");

  }
  else if(b>c)
  {
    printf("b is greater than c");

  }
  else
  {
    printf("c is greater");
  }
  return 0;
  
}