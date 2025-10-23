// wap using switch statement

#include <stdio.h>

int main()
{
  int a, b,e;
  char operator;

  printf("enter two numbers");
  scanf("%d%d", &a, &b);

  printf("enter an operator");
  scanf(" %c", &operator);

switch (operator)
{
  case '+':
    e = a + b;
    printf("sum=%d", e);
    break;

    case '-':
      e = a - b;
      printf("sub=%d", e);
      break;

      case '*':
        e = a * b;
        printf("product=%d", e);
        break;

        case '/':
          e = a / b;
          printf("divide=%d", e);
          break;

          case '%':
            e = a % b;
            printf("modulus=%d", e);
            break;

            default:
              printf("invalid operator");
}

            return 0;

}
