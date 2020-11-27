#include "binary_trees.h"

size_t binary_tree_height_recursion(const binary_tree_t *tree);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height_recursion(tree) - 1);
}

/**
 * binary_tree_height_recursion - helper function for binary_tree_height
 * @tree: pointer to the root node of the tree
 * Return: the height of the tree + 1
 */
size_t binary_tree_height_recursion(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = binary_tree_height_recursion(tree->left);
	b = binary_tree_height_recursion(tree->right);

	if (a > b)
		return (a + 1);

	return (b + 1);
}
