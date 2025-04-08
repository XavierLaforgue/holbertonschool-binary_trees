#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to parent node
 * @value: value to store in the new (left) node
 * Return: pointer to new (left) node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);
	left_node = parent->left;
	parent->left = malloc(sizeof(binary_tree_t));
	if (parent->left == NULL)
		return (NULL);
	parent->left->parent = parent;
	parent->left->n = value;
	parent->left->left = left_node;
	parent->left->right = NULL;
	if (left_node != NULL)
		left_node->parent = parent->left;

	return (parent->left);
}
