#include <stdio.h>

void add(int a, int b)
{
  printf("%d + %d = %d\n", a, b, a + b);
}

void sub(int a, int b)
{
  printf("%d - %d = %d\n", a, b, a - b);
}

int main()
{
  add(1, 2);
  sub(1, 2);

  return 0;
}