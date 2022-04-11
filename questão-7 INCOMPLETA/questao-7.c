#include <stdio.h>
int main()
{
  int mat[4], *p, x;
  printf("%d\n", x);
  x = (*mat)++;
  printf("%d\n", x);
  printf("%d\n", p);
  p = mat + 1;
  printf("%d\n", p);
  return 0;
}