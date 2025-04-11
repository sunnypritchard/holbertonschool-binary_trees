#include "binary_trees.h"
/**
 * balance_height - Function that finds the height of a node.
 * @tree: It's a pointer that pointe the root node.
 * Return: return the height in end.
 */

int balance_height(binary_tree_t *tree)
{
int height_left, height_right;

if (tree == NULL)
{
return (0);
}
height_left = balance_height(tree->left);
height_right = balance_height(tree->right);

return (1 + (height_left > height_right ? height_left : height_right));
}

/**
 * binary_tree_balance - Function that measures the balance
 * factor of a binary tree.
 * @tree: It's a pointer that pointe to the root node of
 * the tree to measure the balance factor.
 * Return: return the balance factor in end.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (balance_height(tree->left) - balance_height(tree->right));
}
