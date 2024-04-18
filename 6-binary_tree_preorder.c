#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder- binary tree using pre-order traversal
 * @tree: A pointer to root node of the tree to traversal
 * @func: A pointer to a function to call for each node
 *
 * Description: The function calls for func for each node
 * in binary tree, passing the value of eacah node as a parameter
 * to func
 * if tree or func is NULL, It does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

