// write a program to convert the temperature from celsius to fahrenheit

#include <stdio.h>

int main()
{

  float celsius, fahrenheit;

  printf("enter temperature in celsius");
  scanf("%f", &celsius);

  fahrenheit = (9.0/5.0 )* celsius + 32;

  printf("temperature in fahrenheit=%f", fahrenheit);

  return 0;
}