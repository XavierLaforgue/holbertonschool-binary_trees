#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-childe of another
 * node
 * @parent: pointer to parent node
 * @value: value to be stored in new (right) node
 * Return: pointer to new (right) node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	right_node = parent->right;
	parent->right = malloc(sizeof(binary_tree_t));
	if (parent->right == NULL)
		return (NULL);
	parent->right->parent = parent;
	parent->right->n = value;
	parent->right->right = right_node;
	parent->right->left = NULL;
	if (right_node != NULL)
		right_node->parent = parent->right;

	return (parent->right);
}
