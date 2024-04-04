#include <stdio.h>

int main()
{
  bool a = true;
  char b = '>';
  int c = 499;
  int d; // uninitialized variable int d = 0;
  float e = 3.14;
  printf("a=%d\n", a);
  printf("b=%d %c\n", b, b);
  printf("c=%d\n", c);
  printf("d=%d\n", d);
  printf("e=%d %f\n", e, e);

  return 0;
}