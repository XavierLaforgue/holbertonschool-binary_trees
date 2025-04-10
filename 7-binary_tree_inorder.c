#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to function to call for each node
 * Return nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left != NULL)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right != NULL)
			binary_tree_inorder(tree->right, func);
	}
}
