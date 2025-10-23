//area and circum of a circle

#include <stdio.h>

int main()
{
  float radius, circum, area;

  printf("enter a radius");
  scanf("%f", &radius);

  circum = 2 * 3.14 * radius;
  area = 3.14 * radius * radius;

  printf("circum=%f", circum);
  printf("area=%f",area);

  return 0;
}

