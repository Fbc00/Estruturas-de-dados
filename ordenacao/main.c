#include "insercao.c"
#include <stdio.h>
#include "heapSort.c"
#include "countingSort.c"
int main(void)
{
	int lista[] = {0, 2, 5, 3, 0, 2, 3, 0, 3};
	int *memoryRef = lista;
	int len = sizeof(lista) / sizeof(lista[0]);
	int *B = (int *)malloc(sizeof(int) * 8);

	CountingSort(lista, B, 6, len);
	printf("COUNTING SORT\n");
	int listahEAP[] = {0, 2, 5, 3, 0, 2, 3, 0, 3, 9, 8};

	heapSort(listahEAP, 11);
	printf("HEAPSORT \n");
	int insercaoList[] = {0, 2, 5, 3, 0, 2, 3, 0, 3, 9, 8};
	int *memoryRefInsercao = insercaoList;

	insercao(memoryRefInsercao, 11);
	printf("INSERCAOSORT ");
	return 0;
}