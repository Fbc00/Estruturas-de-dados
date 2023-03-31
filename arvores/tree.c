#include "tree.h"

struct TreeNode *init()
{
	struct TreeNode *tree = (struct TreeNode *)malloc(sizeof(struct TreeNode));

	tree->raiz = 0;
	tree->right = NULL;
	tree->left = NULL;
	return tree;
};