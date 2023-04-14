#include "list.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct Node *no;
list *init()
{
	no node = (no)malloc(sizeof(no));
	list *lista = (list *)malloc(sizeof(list));
	lista->size = 0;
	lista->primeiro = node;
	lista->ultimo = lista->primeiro;
	lista->primeiro->next = NULL;
	return lista;
};
void insert(list *l, int valor)
{
	no node = (no)malloc(sizeof(no));
	if (!l->primeiro->val)
	{
		l->primeiro->val = valor;
	}
	else
	{
		node->val = valor;
		l->ultimo->next = node;
		l->ultimo = l->ultimo->next;
	}
	l->size++;
	// printf(" - Valor inserido: %d \n ", valor);
	// printf("- valor do ultimo: %d \n", l->ultimo->val);
	// printf("- valor do primeiro: %d \n", l->primeiro->val);
}
void insertInit(list *l, int valor)
{
	no aux = (no)malloc(sizeof(no));
	if (l->primeiro->next == NULL)
	{
		l->primeiro->val = valor;
	}
	else
	{
		aux->val = valor;
		aux->next = l->primeiro;
		l->primeiro = aux;
	}
	l->size++;
}
void printList(list *l)
{
	no aux = (no)malloc(sizeof(no));
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

int removeInicio(list *l)
{
	no resto = (no)malloc(sizeof(no));
	if (!l->size)
	{
		printf("lista vazia");
		return -1;
	}

	resto = l->primeiro;
	l->primeiro = l->primeiro->next;
	resto->next = NULL;
	free(resto);

	l->size--;

	if (!l->size)
	{
		l->ultimo = l->primeiro;
	}
}

int removeFim(list *l)
{
	no resto = (no)malloc(sizeof(no));
	if (!l->size)
	{
		printf("lista vazia");
		return -1;
	}
	if (l->primeiro == l->ultimo)
	{
		resto = l->ultimo;
		l->primeiro = (no)malloc(sizeof(no));
		l->ultimo = l->primeiro;

		free(resto);
		l->size--;

		return 1;
	}
	no aux;
	aux = l->primeiro->next;

	while (aux->next->val != l->ultimo->val)
	{
		aux = aux->next;
	}

	resto = l->ultimo;
	aux->next = NULL;
	l->ultimo = aux;
	free(resto);

	l->size--;

	if (!l->size)
	{
		l->ultimo = l->primeiro;
	}
}