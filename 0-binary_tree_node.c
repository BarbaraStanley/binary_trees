#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent - pointer to parent of the node
 * @value - value to put in the new node
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t bnode;

	bnode = malloc(sizeof(binary_tree_t));

	bnode->n = value;
	bnode->parent = parent;
	bnode->left = NULL;
	bnode->right = NULL;

	return (bnode);
}
