#include <stdlib.h>
#include <stdio.h>

void troca(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void maxHeapify(int vetor[], int size, int i)
{
	int l = 2 * i;
	int r = 2 * i + 1;
	int maior = i;

	if (l < size && vetor[l] > vetor[maior])
	{
		maior = l;
	}

	if (r < size && vetor[r] > vetor[maior])
	{
		maior = r;
	}

	if (maior != i)
	{
		troca(&vetor[i], &vetor[maior]);
		maxHeapify(vetor, size, maior);
	}
}

void buildMaxHeap(int A[], int len)
{
	for (int k = len / 2; k >= 0; k--)
	{
		maxHeapify(A, len, k);
	}
}

void heapSort(int A[], int len)
{

	buildMaxHeap(A, len);
	for (int i = len - 1; i >= 0; i--)
	{
		troca(&A[0], &A[i]);

		maxHeapify(A, i, 0);
	}

	for (size_t i = 0; i < len; i++)
	{
		printf(" %d ", A[i]);
	}
}
