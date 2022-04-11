#include <stdio.h>
int main()
{
  int pulo[] = {0, 1, 67, 3, 4, 5, 6, 7};
  printf("%d\n", *(pulo + 2)); // Apenas essa expressão faz referência ao terceiro elemento do vetor.
  printf("%d\n", *(pulo + 4));
  printf("%d\n", pulo + 2);
  printf("%d\n", pulo + 4);
  return 0;
}