#include "list.h"
#include <stdlib.h>
#include <stdio.h>

list *init()
{
	Node *node = (Node *)malloc(sizeof(list));
	list *lista = (list *)malloc(sizeof(list));

	lista->primeiro = node;
	lista->ultimo = lista->primeiro;
	lista->primeiro->next = NULL;
	lista->primeiro->val = 0;
	return lista;
};
void insert(list *l, int valor)
{
	Node *node = (Node *)malloc(sizeof(Node));
	node->val = valor;
	l->ultimo->next = node;

	printf(" - Valor inserido: %d ", node->val);
}

// void printList(list *l)
// {
// 	while (l->next != NULL)
// 	{
// 		printf(" - Valor: %d", l->val);
// 		l = l->next;
// 	}
// }

// int search(list *l, int valor)
// {
// 	while (l->val != valor)
// 	{
// 		if (l->next == NULL)
// 		{
// 			printf("valor não achado");
// 			return 0;
// 		}
// 		l = l->next;
// 	}
// 	return l->val;
// }