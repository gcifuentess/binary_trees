#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves;

	if (!tree)
		return (0);

	if (!tree->left)
		return (1);

	if (!tree->right)
		return (1);

	n_leaves = 0;
	n_leaves += binary_tree_leaves(tree->left);
	n_leaves += binary_tree_leaves(tree->right);

	return (n_leaves);
}
