#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the three to count the number of nodes
 * Return: the number of nodes with at least one child, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		++nodes;
	if (tree->left != NULL)
		nodes = nodes + binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		nodes = nodes + binary_tree_nodes(tree->right);
	return (nodes);
}
