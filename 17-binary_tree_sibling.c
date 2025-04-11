#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - v
 * @node: Pointeur l'arbre
 * Return: size_t
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *parent;
if (node == NULL)
return (NULL);

if (node->parent == NULL)
return (NULL);

parent = node->parent;

if (parent->left == node && parent->right)
return (parent->right);

if (parent->right == node && parent->left)
return (parent->left);

return (NULL);
}
