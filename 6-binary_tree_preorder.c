#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - verifie si le noeud est une feuille
 * @tree: Pointeur l'arbre
 * @func: fonction executer pou chaque noeud
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!func || !tree)
    return;
    
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
