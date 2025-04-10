#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - v
 * @tree: Pointeur l'arbre
 * Return: size_t
*/



size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t lnode = 0, rnode = 0, nodes = 0;

if (tree == NULL)
return (0);

if (tree->left || tree->right)
nodes++;

lnode = binary_tree_nodes(tree->left);
rnode = binary_tree_nodes(tree->right);

nodes += (lnode + rnode);

return (nodes);
}
