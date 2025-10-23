// write a program to find the sum of even number and sum of odd number from 1 to n

#include <stdio.h>

int main()
{
  int i,n, sumofeven=0, sumofodd=0;

  printf("enter a number");
  scanf("%d", &n);

  for (i = 1; i <= n; i = i + 1)
  {
    if(i % 2 == 0)
    {
      sumofeven =sumofeven+i ;
    }

    else
    {
      sumofodd = sumofodd+i;
    }
  }
  printf("sumofeven=%d\n", sumofeven);
  printf("sumofodd=%d\n", sumofodd);

  return 0;
  

  }
