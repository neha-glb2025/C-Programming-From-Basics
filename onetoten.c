// write a program to print the sum of all numbers up to a given number

# include <stdio.h>

int main()
{
  int i,n,sum=0;

  printf("enter a number");
  scanf("%d", &n);

  for (i = 1; i <= n; i = i + 1)
  {
    sum = sum + i;
  }
  printf("%d", sum);

  return 0;
  }
