#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - v
 * @tree: Pointeur l'arbre
 * Return: size_t
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0, right = 0;

if (!tree)
return (0);

if (tree->left != NULL)
left = 1 + binary_tree_balance(tree->left);

if (tree->right  != NULL)
right = 1 + binary_tree_balance(tree->right);

return (left - right);
}
