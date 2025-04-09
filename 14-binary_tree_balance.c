#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (-1);
	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);
	return (height_left < height_right ? height_right : height_left);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	height_left = 1 + binary_tree_height(tree->left);
	height_right = 1 + binary_tree_height(tree->right);
	return (height_left - height_right);
}
