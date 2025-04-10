#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - verifie si le noeud est une feuille
 * @node: Pointeur vers le noeud parent
 * Return: 1 si feuille 0 si il est parent
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node && !node->left && !node->right)
return (1);
return (0);
}
