#include <stddef.h>
#include <stdio.h>

void insercao(int *list, int len)
{
	int i, j, aux;

	for (int k = 1; k < len; k++)
	{
		aux = list[k];
		j = k - 1;
		while ((j >= 0) && (aux < list[j]))
		{
			list[k + 1] = list[j];
			j--;
		}
		list[j + 1] = aux;
	}
}