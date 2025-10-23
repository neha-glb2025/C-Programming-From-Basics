// write a program to find perimeter of a square

#include <stdio.h>

int main()
{
  int side, perimeter;

  printf("enter side");
  scanf("%d", &side);

  perimeter = 4 * side;
  printf("perimeter of square=%d", perimeter);

  return 0;
}