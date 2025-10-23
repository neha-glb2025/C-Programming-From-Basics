// write a program to find  the greatest number among three numbers 

#include <stdio.h>

int main()
{

  int first_number, second_number, third_number;

  printf("enter three numbers");
  scanf("%d%d%d", &first_number, &second_number, &third_number);

  if(first_number>second_number && first_number>third_number)
  { 
  printf("first_number is the greatest number");
  }

    else if(second_number>third_number && second_number>third_number)
 {
    printf("second_number is the greatest number");
 }
    
      else
  {
      printf("third_number is the greatest number");
  }
  
      return 0;
}
