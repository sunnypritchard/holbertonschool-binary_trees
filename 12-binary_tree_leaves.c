#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - v
 * @tree: Pointeur l'arbre
 * Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaves += 1;

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
