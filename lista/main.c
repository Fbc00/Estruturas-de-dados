#include <stdlib.h>
#include <stdio.h>
#include "list.c"
#include "doubleLinkedList.c"

int main(void)
{
	list *l = init();

	insert(l, 7);
	insert(l, 8);
	insert(l, 9);
	insert(l, 2);
	insert(l, 3);
	insert(l, 5);
	insert(l, 7);

	// printList(l);
	// printf("%d \n", search(l, 10));
	printf("%d", l->size);
	removeInicio(l);
	doubleLinkedList *listDouble = initDoubleLinkedList();
	insertDoubleLinkedList(listDouble, 10);
	insertDoubleLinkedList(listDouble, 12);
	insertDoubleLinkedList(listDouble, 13);
	insertDoubleLinkedList(listDouble, 14);

	return 0;
}