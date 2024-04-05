#include <stdio.h>

int main() {
  int x, y;
  x = 8, y = 3;
  printf("%d %% %d = %d\n", x, y, x % y);

  x = 8, y = 3;
  x = y++;
  printf("x = %d, y = %d\n", x, y);

  x = 8, y = 3;
  x = ++y;
  printf("x = %d, y = %d\n", x, y);
}