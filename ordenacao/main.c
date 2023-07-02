#include "insercao.c"
#include <stdio.h>
#include "heapSort.c"
int main(void)
{
	int lista[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
	int N = sizeof(lista) / sizeof(lista[0]);

	heapSort(lista, N);

	return 0;
}