#include <stdio.h>

int main()
{
  char x = "clara";
  int y[] = {0, 1, 2, 3, 4, 5};
  float z[] = {0.1, 0.2, 0.4, 0.5};
  double a[] = {1, 5, 6, 9, 787, 878, 87};
  printf("Endereços char:\n");
  printf("%d\n", x + 1);
  printf("%d\n", x + 2);
  printf("%d\n", x + 3);
  printf("Endereços int:\n");
  printf("%d\n", y + 1);
  printf("%d\n", y + 2);
  printf("%d\n", y + 3);
  printf("Endereços float:\n");
  printf("%d\n", z + 1);
  printf("%d\n", z + 2);
  printf("%d\n", z + 3);
  printf("Endereços double:\n");
  printf("%d\n", a + 1);
  printf("%d\n", a + 2);
  printf("%d\n", a + 3);
  return 0;
}