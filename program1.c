// write a program to find the percentage of five subjects

#include <stdio.h>

int main()
    {

      float English,Mathematics,Hindi,History,Physics,percentage;
      
      printf("enter  five subject marks ");
      scanf("%f%f%f%f%f", &English,&Mathematics,&Hindi,&History,&Physics);

      percentage=(English+Mathematics+Hindi+History+Physics)/5;

      printf("percentage=%f", percentage);

      return 0;
    } 