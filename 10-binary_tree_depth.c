#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	for (depth = 0; tree->parent; depth++)
		tree = tree->parent;

	return (depth);
}
