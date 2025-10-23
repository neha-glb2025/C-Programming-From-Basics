// write a program to print the table of a number given by user

#include <stdio.h>

int main()
{
  int i, n, product;

  printf("enter a number");
  scanf("%d", &n);

  for (i = 1; i <= 10; i = i + 1)
  {
    product = n * i;
    
    printf("%d\n", product);
    }

    return 0;
  }
