// write a program to find area and circumference of a circle

#include <stdio.h>

int main()
{
  float radius, area, circumference;

  printf("enter radius");
  scanf("%f", &radius);

  area = 3.14 * radius * radius;
  circumference = 2 * 3.14 * radius;

  printf(" area of circle=%f", area);
  printf("circumference of circle=%f", circumference);

  return 0;
}