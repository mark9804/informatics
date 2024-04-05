#include <stdio.h>

void calc(int a, int b, int op)
{
  if (1 == op)
  {
    printf("%d + %d = %d\n", a, b, a + b);
  }
  else if (2 == op)
  {
    printf("%d - %d = %d\n", a, b, a - b);
  }
  else if (3 == op)
  {
    printf("%d * %d = %d\n", a, b, a * b);
  }
  else if (4 == op)
  {
    printf("%d / %d = %d\n", a, b, a / b);
  }
  else
  {
    printf("Invalid operator\n");
  }
}

void calcChar(int a, int b, char op)
{
  switch (op)
  {
  case '+':
    printf("%d + %d = %d\n", a, b, a + b);
    break;
  case '-':
    printf("%d - %d = %d\n", a, b, a - b);
    break;
  case '*':
    printf("%d * %d = %d\n", a, b, a * b);
    break;
  case '/':
    printf("%d / %d = %d\n", a, b, a / b);
    break;
  default:
    printf("Invalid operator\n");
    break;
  }
}

int main()
{
  calc(45, 5, 1);
  calc(45, 5, 2);
  calc(45, 5, 3);
  calc(45, 5, 4);
  calc(45, 5, 5);

  calcChar(45, 5, '+');
  calcChar(45, 5, '-');
  calcChar(45, 5, '*');
  calcChar(45, 5, '/');
  calcChar(45, 5, '%');

  return 0;
}