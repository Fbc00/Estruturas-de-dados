#include "list.h"
#include <stdlib.h>
#include <stdio.h>

list *init()
{
	struct Node *node = (struct Node *)malloc(sizeof(struct Node));
	list *lista = (list *)malloc(sizeof(list));

	lista->primeiro = node;
	lista->ultimo = lista->primeiro;
	lista->primeiro->next = NULL;
	lista->primeiro->val = 0;
	return lista;
};
int insert(list *l, int valor)
{
	struct Node *node = (struct Node *)malloc(sizeof(struct Node));
	if (l->primeiro->val == 0)
	{
		l->primeiro->val = valor;
	}
	else
	{
		node->val = valor;
		l->ultimo->next = node;
		l->ultimo = l->ultimo->next;
	}
	// printf(" - Valor inserido: %d \n ", valor);
	// printf("- valor do ultimo: %d \n", l->ultimo->val);
	// printf("- valor do primeiro: %d \n", l->primeiro->val);
	return 0;
}

void printList(list *l)
{
	struct Node *aux = NULL;
	if (l->primeiro->next)
	{
		printf(" - Valor: %d", l->primeiro->val);
		aux = l->primeiro->next;
	}
	while (aux != NULL)
	{
		printf(" - Valor: %d", aux->val);
		aux = aux->next;
	}
}

int search(list *l, int valor)
{
	struct Node *aux = NULL;
	if (l->primeiro->val == valor || l->ultimo->val == valor)
	{
		printf("valor encontrado");
		return valor;
	}
	aux = l->primeiro->next;
	while (aux->val != valor)
	{
		if (aux->next == NULL)
		{
			printf("valor não achado");
			return 0;
		}
		aux = aux->next;
	}
	printf("encontrei:  ");
	return aux->val;
}