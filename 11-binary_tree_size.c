#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - v
 * @tree: Pointeur l'arbre
 * Return: size_t
*/


size_t binary_tree_size(const binary_tree_t *tree)
{
size_t lsize, rsize;

if (tree == NULL)
return (0);

lsize = binary_tree_size(tree->left);
rsize = binary_tree_size(tree->right);

return (lsize + rsize + 1);
}
