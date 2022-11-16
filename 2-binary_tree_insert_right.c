#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: pointer to created node or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;
	binary_tree_t *new_right_child;

	right_child = parent->right;
	new_right_child = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);

	if (parent->right)
	{
		parent->right = new_right_child;
		new_right_child->left = right_child;
		right_child->parent = new_right_child;
	}
	parent->right = new_right_child;
	return (new_right_child);
}
