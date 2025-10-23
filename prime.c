// write a program to check a number is prime or not

#include <stdio.h>

int main()
{
  int num,i,c=0 ;

  printf("enter a number");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    if(num%i==0 )
    {
      c = c + 1;
    }
      
  }
  if(c==2)
  {
    printf("prime");
  }
  else
{
  printf("not prime");
}

    
    return 0;
}