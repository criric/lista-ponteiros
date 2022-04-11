#include <stdio.h>

// a)
// Resposta: Imprime todos os valores do vetor;
// int main()
// {
//   int vet[] = {4, 9, 13};
//   int i;
//   for (i = 0; i < 3; i++)
//   {
//     printf("%d ", *(vet + i));
//   }
// }

// b)
// Resposta: Imprime os endereços dos valores do vetor
int main()
{
  int vet[] = {4, 9, 13};
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("%X ", vet + i);
  }
}
