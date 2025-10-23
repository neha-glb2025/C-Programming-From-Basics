// write a program to find the momentum

#include <stdio.h>

int main()
{
  float mass, velocity, momentum;

  printf("enter mass,velocity");
  scanf("%f%f", &mass, &velocity);

  momentum = mass * velocity;

  printf("momentum=%f", momentum);

  return 0;
}