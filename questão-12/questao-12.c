// O ponteiro para função permite que eu chame funções utilizando apenas o nome do ponteiro, como também passar funções como parâmetro de outras funções

#include <stdio.h>

int soma(int y, int x)
{
  return x + y;
}
int main()
{
  int x, y;
  int (*pont)(int, int);
  printf("Digite dois número inteiros: ");
  scanf("%d %d", &x, &y);
  pont = soma;

  int func;
  func = pont(x, y);
  printf("A soma é: %d\n", func);
  return 0;
}