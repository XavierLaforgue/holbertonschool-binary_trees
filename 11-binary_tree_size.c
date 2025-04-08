#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		size_left += binary_tree_size(tree->left);
	if (tree->right != NULL)
		size_right += binary_tree_size(tree->right);
	return (1 + size_left + size_right);
}
