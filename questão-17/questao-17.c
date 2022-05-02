#include <stdio.h>

int i = 0;

void somaVetor(int *v1, int *v2, int *v3, int n)
{
  for (i = 0; i < n; i++)
  {
    v3[i] = v1[i] + v2[i];
  }

  for (i = 0; i < n; i++)
  {
    printf("%d + %d = %d \n", v1[i], v2[i], v3[i]);
  }

  printf("[");
  for (i = 0; i < n; i++)
  {
    printf("%d ", v3[i]);
  }
  printf("]");
}

int main()
{
  int x;
  int *vt1, *vt2, *vt3;
  printf("Qual o tamanho dos vetores: ");
  scanf("%d", &x);

  vt1 = malloc(x * sizeof(int));
  vt2 = malloc(x * sizeof(int));
  vt3 = malloc(x * sizeof(int));

  for (i = 0; i < x; i++)
  {
    printf("Digite um elemento para o primeiro vetor: ");
    scanf("%d", &vt1[i]);
  }

  for (i = 0; i < x; i++)
  {
    printf("Digite um elemento para o segundo vetor: ");
    scanf("%d", &vt2[i]);
  }

  somaVetor(vt1, vt2, vt3, x);
  return 0;
}