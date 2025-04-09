#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node whose sibling will be found
 * Return: pointer to sibling or NULL if nonexistent (either node or sibling)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int left_node;

	if (!node)
		return (NULL);
	if (node->parent)
	{
		left_node = node == node->parent->left;
		return (left_node ? node->parent->right : node->parent->left);
	}
	return (NULL);
}
