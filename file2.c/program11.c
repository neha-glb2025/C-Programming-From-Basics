// write a program to find area of a rectangle

#include <stdio.h>

int main()
{
  int length, breadth, area_of_rectangle;

  printf("enter length and breadth ");
  scanf("%d%d", &length, &breadth);

  area_of_rectangle = length * breadth;

  printf("area_of_rectangle=%d", area_of_rectangle);

  return 0;
}