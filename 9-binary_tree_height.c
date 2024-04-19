
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height = 0;

    if (tree == NULL)
        return (0);

    while (tree->parent != NULL)
    {
        height--;
        tree = tree->parent;
    }

    return (height + 1);
}
