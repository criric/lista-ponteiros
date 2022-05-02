#include <stdio.h>
#include <stdlib.h>

int i, j;
float aux;
void ordena(float *pn, int t)
{
  for (i = 0; i < t; i++)
  {
    for (j = 0; j < t; j++)
    {
      if (pn[i] < pn[j])
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
  ordena(x, n);
  return 0;
}