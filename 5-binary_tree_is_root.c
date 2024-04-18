#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is a root node in
 * binary tree
 * @node: A pointer to node
 *
 * Return: 1 if the given node is  root node, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}

