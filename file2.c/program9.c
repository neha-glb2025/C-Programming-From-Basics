// write a program to check leap year or not

#include <stdio.h>

int main()
{
  int year;

  printf("enter year");
  scanf("%d", &year);

  if(year%4==0)
{
  printf("leap year");
}    

else
{
  printf("not leap year");
}

return 0;
}