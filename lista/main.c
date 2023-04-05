#include <stdlib.h>
#include <stdio.h>
#include "list.c"

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

	printList(l);
	printf("%d", search(l, 7));

	return 0;
}