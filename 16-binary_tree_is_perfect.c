#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: It's a pointer that pointe to the root node of the tree to check.
 * Return: return 1 if the tree is perfect or 0 if tree is no perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->right != NULL && tree->left != NULL)
{
if ((tree->left->left == NULL && tree->left->right == NULL) &&
(tree->right->right == NULL && tree->right->left == NULL))
{
return (1);
}
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}
if (tree->parent == NULL)
{
return (1);
}
return (0);
}
