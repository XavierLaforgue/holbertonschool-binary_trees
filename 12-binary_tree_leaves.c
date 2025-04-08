#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		leaves_left = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaves_right = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1 + leaves_left + leaves_right);
	return (leaves_left + leaves_right);
}
