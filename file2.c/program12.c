// write a program to find area of triangle by using herons formula

#include <stdio.h>
#include <math.h>

int main()
{
  float side1, side2, side3, semi_perimeter, area_of_triangle;
  
  printf("enter three sides of triangle");
  scanf("%f%f%f", &side1, &side2, &side3);

  semi_perimeter = (side1 + side2 + side3) / 2;
  area_of_triangle = sqrt(semi_perimeter * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3));

                      printf("area_of_triangle=%f", area_of_triangle);

                      return 0;

  
}