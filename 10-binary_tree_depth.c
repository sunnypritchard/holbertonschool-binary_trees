#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - v
 * @tree: Pointeur l'arbre
 * Return: size_t
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
