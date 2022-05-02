#include <stdio.h>
#include <stdlib.h>

// Declaração de variaveis
int i, j;

// Função para saber se o número é menor que o outro
int ordena(const void *a, const void *b)
{
  return (*(float *)a - *(float *)b);
}

int main()
{
  float *x;
  int n;

  // Pega o tamanho do array
  printf("Digite o tamanho do array: ");
  scanf("%d", &n);

  // Alocação dinâmica do array
  x = malloc(n * sizeof(float));

  // Laço para saber os elementos do array
  for (i = 0; i < n; i++)
  {
    printf("Digite um valor para o array: ");
    scanf("%f", &x[i]);
  }

  // Função qsort(array, tamanho do array, tamanho em bytes do tipo de variavel, função de ordenação)
  qsort(x, n, sizeof(float), ordena);

  // Laço para imprimir meu vetor ordenado
  for (i = 0; i < n; i++)
  {
    printf("%.1f ", x[i]);
  }

  // Liberação da memória
  free(x);
  return 0;
}