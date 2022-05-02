#include <stdio.h>
#include <stdlib.h>

int i = 0;
int j = 0;
int k = 0;
int soma = 0;

float **alocaMatriz(int nlA, int ncA)
{
  float **matrix = malloc(nlA * sizeof(float *));

  matrix[0] = malloc(nlA * ncA * sizeof(float));

  for (i = 1; i < nlA; i++)
  {
    matrix[i] = matrix[i - 1] + ncA;
  }

  return matrix;
}

void multiplicaMatriz(float **A, float **B, float **C, int nlA, int ncA, int ncB)
{
  for (i = 0; i < nlA; i++)
  {
    for (j = 0; j < ncB; j++)
    {
      C[i][j] = 0;
      for (k = 0; k < ncA; k++)
      {
        soma += A[i][k] * B[k][j];
      }
      C[i][j] = soma;
      soma = 0;
    }
  }
}

void imprimeMatriz(float **C, int ncA)
{
  for (i = 0; i < ncA; i++)
  {
    printf("%.1f \n", C[i][j]);
  }
}

int main()
{
  int n1, n2, n3;
  float **m1, **m2, **m3;

  printf("Digite o número de linhas de A: ");
  scanf("%d", &n1);

  printf("Digite o número de colunas de A = Número de linhas de B: ");
  scanf("%d", &n2);

  printf("Digite o número de colunas de B: ");
  scanf("%d", &n3);

  m1 = alocaMatriz(n1, n2);
  m2 = alocaMatriz(n2, n3);
  m3 = alocaMatriz(n2, n2);

  for (i = 0; i < n1; i++)
  {
    for (j = 0; j < n2; j++)
    {
      m1[i][j] = 1;
    }
  }

  for (i = 0; i < n2; i++)
  {
    for (j = 0; j < n3; j++)
    {
      m2[i][j] = 1;
    }
  }

  multiplicaMatriz(m1, m2, m3, n1, n2, n3);
  imprimeMatriz(m3, n2);

  return 0;
}