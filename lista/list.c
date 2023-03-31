#include "list.h"
#include <stdlib.h>
#include <stdio.h>

struct Node *init()
{
	struct Node *node = (struct Node *)malloc(sizeof(struct Node));

	node->val = 0;
	node->next = NULL;
	return node;
};
void insert(struct Node *l, int valor)
{
	struct Node *node = init();
	if (l->val == 0)
	{
		l->val = valor;
		l->next = node;
	}
	else
	{
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = node;
		l->val = valor;
	}

	printf("Valor inserido: %d \n", l->val);
}

void printList(struct Node *l)
{
	while (l->next != NULL)
	{
		printf("Valor: %d \n", l->val);
		l = l->next;
	}
}