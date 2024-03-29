#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_of_nodes = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	num_of_nodes += binary_tree_nodes(tree->left);
	num_of_nodes += binary_tree_nodes(tree->right);

	return (num_of_nodes + 1);
}
