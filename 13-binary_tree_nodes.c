#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes;

	if (!tree)
		return (0);

	n_nodes = 0;
	if (tree->left || tree->right)
	{
		n_nodes = 1;
		n_nodes += binary_tree_nodes(tree->left);
		n_nodes += binary_tree_nodes(tree->right);
	}

	return (n_nodes);
}
