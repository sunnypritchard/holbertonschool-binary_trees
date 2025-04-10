#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - v
 * @tree: Pointeur l'arbre
 * Return: lngueur
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lheight, rheight;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (0);

lheight = binary_tree_height(tree->left);
rheight = binary_tree_height(tree->right);

if (lheight > rheight)
return (lheight + 1);

return (rheight + 1);
}
