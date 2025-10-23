#include <stdio.h>

int main()
{
  int a, b,e;
  char operator;

  printf("enter the two value");
  scanf("%d%d", &a, &b);

  printf("enter the operator");
  scanf(" %c", &operator);

  switch(operator)
  {
    case'+':
      e = a + b;
      printf("sum=%d", e);

      break;

      case'-':
        e= a - b;
        printf("sub=%d", e);

        break;

        case'*':
          e = a * b;
          printf("mul=%d", e);

          break;

          case'/':
            e = a / b;
            printf("div=%d", e);

            break;

            case'%':
              e = a % b;
              printf("mod=%d", e);

              break;

              default:
               printf("operator");
  }
  return 0;
  }
