// write a program to find the area of cone

#include <stdio.h>

int main()
{
  float radius, length, area;

  printf("enter radius,length");
  scanf("%f%f", &radius, &length);

  area = 3.14 * radius * length;

  printf("area of cone=%f", area);

  return 0;
}