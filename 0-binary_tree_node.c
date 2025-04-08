#include "binary_trees.h"

/**
 * binary_tree_node - creates a note belonging to a binary tree
 * @parent: pointer to the parent node (NULL if creating the root node)
 * @value: integer value to store in the node
 * Return: pointer to the created node, or NULL if it failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *curr_node;

	curr_node = malloc(sizeof(binary_tree_t));
	if (curr_node == NULL)
		return (NULL);
	curr_node->parent = parent;
	curr_node->n = value;
	curr_node->left = NULL;
	curr_node->right = NULL;

	return (curr_node);
}
