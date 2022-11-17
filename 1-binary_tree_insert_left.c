#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;
	binary_tree_t *new_left_child;

	left_child = parent->left;
	new_left_child = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	if (parent->left)
	{
		new_left_child->left = left_child;
		left_child->parent = new_left_child;
	}

	parent->left = new_left_child;
	return (new_left_child);
}
