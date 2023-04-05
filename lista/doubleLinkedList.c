#include <stdlib.h>
#include <stdio.h>
#include "doubleLinkedList.h"
doubleLinkedList *initDoubleLinkedList()
{
	doubleLinkedList *node = (doubleLinkedList *)malloc(sizeof(doubleLinkedList));

	node->val = 0;
	node->left = NULL;
	node->right = NULL;
	return node;
};

void insertDoubleLinkedList(doubleLinkedList *l, int valor)
{
	doubleLinkedList *aux = initDoubleLinkedList();

	while (l->right != NULL)
	{
		l = l->right;
	}
	aux->left = l;
	l->val = valor;
	l->right = aux;
	printf("valor inserido: %d ", valor);
}