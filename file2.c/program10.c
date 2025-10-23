// write a program to find percentage of five marks and grade

#include <stdio.h>

int main()
{
  
  float maths, art, hindi, english, physics,percentage;
  
  printf("enter five subject marks");
  scanf("%f%f%f%f%f", &maths, &art, &hindi, &english, &physics);

  percentage = (maths + art + hindi + english + physics)/5;
  printf("percentage=%f", percentage);

  if(percentage>=90 && percentage<=100)
    {
      printf("Grade=A");
    }

    else if(percentage>=80 && percentage<90)
      {
        printf("Grade=B");
      }

      else if(percentage>=60 && percentage<80)
      {
        printf("Grade=C");
      }

      else
      {
        printf("Grade=D");
      }

      return 0;
}