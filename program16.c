// write a program to find area of equilateral triangle

#include <stdio.h>
#include <math.h>

int main()
{
  float side, area;
  
  printf("enter side of equilateral triangle");
  scanf("%f", &side);

  area = sqrt(3) / 4 * side * side;

  printf("area=%f", area);

  return 0;
}