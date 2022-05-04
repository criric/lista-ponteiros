#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, j;
float aux;
void ordena(float *pn, int t, int (*ordem)(const void *, const void *))
{
  for (i = 0; i < t; i++)
  {
    for (j = 0; j < t; j++)
    {
      if (ordem(&pn[i], &pn[j]) < 0)
      {
        aux = pn[i];
        pn[i] = pn[j];
        pn[j] = aux;
      }
    }
  }

  for (i = 0; i < t; i++)
  {
    printf("%.1f ", pn[i]);
  }
}

int ordenaQsort(const void *a, const void *b)
{
  return (*(float *)a - *(float *)b);
}

int crescente(const void *a, const void *b)
{
  return (*(float *)a - *(float *)b);
}

int main()
{
  float *x;
  int n;

  printf("Digite o tamanho do array: ");
  scanf("%d", &n);

  x = malloc(n * sizeof(float));

  for (i = 0; i < n; i++)
  {
    printf("Digite um valor para o array: ");
    scanf("%f", &x[i]);
  }

  int tempo_inicial_qsort = clock();
  qsort(x, n, sizeof(float), ordenaQsort);
  int tempo_qsort = clock() - tempo_inicial_qsort;

  printf("Vetor em orden crescente: ");
  int tempo_inicial = clock();
  ordena(x, n, crescente);
  int tempo = clock() - tempo_inicial;

  printf("\n");
  printf("Tempo com qsort: %f\n", ((float)tempo_qsort / CLOCKS_PER_SEC));
  printf("Tempo com função criada: %f", ((float)tempo / CLOCKS_PER_SEC));
  printf("\n");

  free(x);
  return 0;
}