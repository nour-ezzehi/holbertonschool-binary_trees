#include "binary_trees.h"

/**
 * binary_tree_node - add a new node to a binary tree
 * @value: value of the node to be added
 * @parent: pointer to the parent node of the node to create
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
