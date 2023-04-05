#include "list.h"
#include <stdlib.h>
#include <stdio.h>

list *init()
{
	list *node = (list *)malloc(sizeof(list));

	node->val = 0;
	node->next = NULL;
	return node;
};
void insert(list *l, int valor)
{
	list *node = init();

	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = node;
	l->val = valor;

	printf(" - Valor inserido: %d ", l->val);
}

void printList(list *l)
{
	while (l->next != NULL)
	{
		printf(" - Valor: %d", l->val);
		l = l->next;
	}
}

int search(list *l, int valor)
{
	while (l->val != valor)
	{
		if (l->next == NULL)
		{
			printf("valor não achado");
			return 0;
		}
		l = l->next;
	}
	return l->val;
}