// write a program to print fabonacci series

#include <stdio.h>

int main()
{
  int i, num,Isterm=0,secterm=1,nexterm;

  printf("enter a number");
  scanf("%d", &num);

  for (i = 0; i <= num;i++)
  {
    nexterm = Isterm + secterm;
    printf("%d", Isterm, secterm, nexterm);
    Isterm = secterm;
    secterm = nexterm;
  }

  return 0;
}