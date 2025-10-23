// write a program to swap  two numbers by using a third variable

#include <stdio.h>

int main()
{

  int first_number, second_number, third_variable;

  printf("enter two numbers");
  scanf("%d%d", &first_number, &second_number);

  third_variable = first_number;
  first_number = second_number;
  second_number = third_variable;

  printf("\nfirst_number=%d", first_number);
  printf("\nsecond_number=%d", second_number);

  return 0;
}