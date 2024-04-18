#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Description: The function calls func for each node in
 * binary tree, passing the value of each node as
 * parameter to func.
 * If tree or func id NULL, it does nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}

