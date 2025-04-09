#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root of the tree to be checked
 * Return: 1 if the tree is full (every node has either 0 or 2 children), 0
 * otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left != !tree->right)
		return (0);
	if (binary_tree_is_full(tree->left) != binary_tree_is_full(tree->right))
		return (0);
	return (1);
}
