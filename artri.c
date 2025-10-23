// write a program to find area of right angled triangle

#include <stdio.h>

int main()
{
  float base,height, area;
  
  printf("enter base,height of triangle");
  scanf("%f%f", &base,&height);

  area = 0.5*base*height;

  printf("area=%f", area);

  return 0;
}