// write a program to find the area of rectangle

#include <stdio.h>

int main()
{
  float  length,breadth, area;

  printf("enter length,breadth");
  scanf("%f%f", &length,&breadth);

  area =  2*(length+breadth);

  printf("area of rectangle=%f", area);

  return 0;
}