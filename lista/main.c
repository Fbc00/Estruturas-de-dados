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
	// printf("%d \n", search(l, 13));

	doubleLinkedList *dobuleList = initDoubleLinkedList();
	insertDoubleLinkedList(dobuleList, 10);
	insertDoubleLinkedList(dobuleList, 12);
	insertDoubleLinkedList(dobuleList, 13);
	insertDoubleLinkedList(dobuleList, 14);
	return 0;
}