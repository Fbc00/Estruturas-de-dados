#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
void CountingSort(int *A, int *B, int k, int len_A)
{
  int *C = (int *)malloc(sizeof(int) * len_A);
  for (int j = 0; j < k; j++)
  {
    C[j] = 0;
  }
  for (int i = 1; i < len_A; i++)
  {
    C[A[i]] = C[A[i]] + 1;
  }

  for (int i = 1; i < k; i++)
  {
    C[i] = C[i] + C[i - 1];
  }

  for (int i = len_A; i > 1; i--)
  {
    B[C[A[i]]] = A[i];
    C[A[i]] = C[A[i]] - 1;
  }

  for (int j = 1; j < len_A; j++)
  {
    printf(" %d ", B[j]);
  }
}
