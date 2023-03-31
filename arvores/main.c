#include <stdlib.h>
#include <stdio.h>

struct TreeNode
{
	int raiz;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode *init()
{
	struct TreeNode *tree = (struct TreeNode *)malloc(sizeof(struct TreeNode));

	tree->raiz = 0;
	tree->right = NULL;
	tree->left = NULL;
	return tree;
};
void insert(struct TreeNode *t, int valor)
{
	struct TreeNode *tree = init();

	if (t->raiz == 0)
	{
		t->raiz = valor;
		printf("inserir na raiz %d \n", valor);
	}
	else
	{
		if (valor > t->raiz)
		{
			if (t->right == NULL)
			{

				t->right = tree;
			}
			printf("inserir a direita %d \n", valor);
			insert(t->right, valor);
		}
		else
		{
			if (t->left == NULL)
			{
				t->left = tree;
			}
			printf("inserir a esquerda %d \n", valor);
			insert(t->left, valor);
		}
	}
};

int main()
{
	struct TreeNode *t = init();

	insert(t, 11);
	insert(t, 10);
	insert(t, 13);
	insert(t, 9);
	insert(t, 15);
	insert(t, 8);
}