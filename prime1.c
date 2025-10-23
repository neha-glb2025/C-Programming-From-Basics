// write a program to check a number is prime or not

#include <stdio.h>

int main()
{
  int i, num;
  printf("enter a number");
  printf("%d", &num);

  for (int i =2; i < num;i++)
  {
    if(num%i==0)
    {
      printf("not prime");
      
    }

    else{
      printf("prime");
    }
  
  }

  return 0;
}
