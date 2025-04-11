#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - v
 * @tree: Pointeur l'arbre
 * Return: size_t
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

return (0);
}
