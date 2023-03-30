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
	l->val = valor;
	l->next = node;

	printf("Valor inserido: %d \n", l->val);
}

int main(void)
{
	struct Node *l = (struct Node *)malloc(sizeof(struct Node));

	l->val = 0;
	l->next = NULL;

	insert(l, 10);
	insert(l, 20);
	insert(l, 30);
	insert(l, 40);
	return 0;
}