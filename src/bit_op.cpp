#include <stdio.h>

int main()
{
  int x, y;
  printf("x = %d, y = %d\n", x, y);

  // ^ (bitwise XOR)
  x = 8, y = 3;                  // 0000 1000, 0000 0011
  printf("(x^y) = %d\n", x ^ y); // 0000 1011

  // & (bitwise AND)
  x = 8, y = 3;                  // 0000 1000, 0000 0011
  printf("(x&y) = %d\n", x & y); // 0000 0000

  // | (bitwise OR)
  x = 8, y = 3;                  // 0000 1000, 0000 0011
  printf("(x|y) = %d\n", x | y); // 0000 1011

  // >> (right shift)
  x = 8, y = 3;                                        // 0000 1000, 0000 0011
  printf("(x>>1) = %d (y>>1) = %d\n", x >> 1, y >> 1); // 0000 0100, 0000 0001

  // << (left shift)
  x = 8, y = 3;                                        // 0000 1000, 0000 0011
  printf("(x<<1) = %d (y<<1) = %d\n", x << 1, y << 1); // 0001 0000, 0000 0110

  // ~ (bitwise NOT)
  x = 8;                     // 0000 1000
  printf("(~x) = %d\n", ~x); // 1111 0111

  return 0;
}