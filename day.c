// write a program to enter a number from user that displays corresponding days of the week by switch statements

#include <stdio.h>

int main()
{
  int n;

  printf("enter day number");
  scanf("%d", &n);

  switch(n)
  {
    case 1:
      printf("day1=Monday");
      break;

      case 2:
        printf("day2=Tuesday");
        break;

        case 3:
          printf("day3=Wednesday");
          break;

          case 4:
            printf("day4=Thursday");
            break;

            case 5:
              printf("day5=Friday");
              break;

              case 6:
                printf("day6=Saturday");
                break;

                case 7:
                  printf("day7=Sunday");
                  break;
  }
  return 0;
}