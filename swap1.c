//swap of two no. by using third variable

#include <stdio.h>

int main()
{
  int a, b, c;

  printf("enter the temprature in celsius");
  scanf("%d%d%d", &a, &b, &c);

  a = b;
  b = c;
  c = a;
  printf("a=%f", a);
  printf("b=%f", b);

  return 0;
  
}