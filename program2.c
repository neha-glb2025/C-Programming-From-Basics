// write a program to find simple interest and compound interest

#include <stdio.h>
#include <math.h>

int main()

    {

      float principal,rate,time,amount,simpleinterest,compoundinterest;

      printf("enter principal,rate,time ");
      
      
      scanf("%f%f%f", &principal, &rate, &time);

      simpleinterest=(principal*rate*time)/100;
      amount = principal * pow((1 + rate / 100), time);
      compoundinterest = amount - principal;

      printf("\nsimpleinterest=%f", simpleinterest);
      printf("\ncompoundinterest=%f", compoundinterest);

      return 0;
    } 