#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height ot the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);
	return (height_left < height_right ? height_right : height_left);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it is perfect (all internal nodes have two children and all
 * leaves have the same depth), 0 otherwise (or empty)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect_left, perfect_right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	perfect_left = binary_tree_is_perfect(tree->left) != 0;
	perfect_right = binary_tree_is_perfect(tree->right) != 0;
	if (perfect_left && perfect_right)
		return (1);
	return (0);
}
