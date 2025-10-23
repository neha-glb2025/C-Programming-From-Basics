// write a program to find area of cyclinder

#include <stdio.h>

int main()
{
  float radius, height,area;
  
  printf("enter radius,height");
  scanf("%f%f", &radius, &height);

  area = 2 *3.14* radius * height;

  printf("area=%f", area);

  return 0;
}