#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - v
 * @node: Pointeur l'arbre
 * Return: size_t
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL)
{
return (NULL);
}
if (node->parent != NULL && node->parent->parent != NULL)
{
if (node->parent->parent->right == node->parent)
{
return (node->parent->parent->left);
}
if (node->parent->parent->left == node->parent)
{
return (node->parent->parent->right);
}
}
return (NULL);
}
