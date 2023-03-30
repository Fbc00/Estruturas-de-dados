#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int val;
	struct Node *next;
};

void insert(struct Node *l, int valor)
{
	struct Node *node = (struct Node *)malloc(sizeof(struct Node));
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

int main(void)
{
	struct Node *l = (struct Node *)malloc(sizeof(struct Node));

	l->val = 0;
	l->next = NULL;

	insert(l, 1);
	insert(l, 2);
	insert(l, 3);
	insert(l, 4);
	insert(l, 5);
	insert(l, 6);
	insert(l, 7);

	printList(l);
	return 0;
}