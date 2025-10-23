//area and circumference of circle

#include <stdio.h>

int main()
{
  float radius, circum, area;

  printf("enter radius of the circle");
  scanf("%f", &radius);

  area = 3.14 * radius * radius;
  circum = 2 * 3.14 * radius;

  printf("area=%f\n", area);
  printf("circum=%f\n", circum);

  return 0;
  
}