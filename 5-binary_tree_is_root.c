#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checcks if a given node is root
 * @node: pointer to the node to check
 * Return: 1 if node is root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (0);
	return (1);
}
