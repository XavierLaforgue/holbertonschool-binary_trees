#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root of the tree to be deleted
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		free(tree);
}
