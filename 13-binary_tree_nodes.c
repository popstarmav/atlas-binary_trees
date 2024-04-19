#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Point to the root node of the tree to count the number of nodes
 * 
 * Return: The number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    
    return ((tree->left != NULL) || (tree->right != NULL)) +
           binary_tree_nodes(tree->left) + 
           binary_tree_nodes(tree->right);
}
