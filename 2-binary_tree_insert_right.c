#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - met noeud à gauche du parent
 * @parent: Pointeur vers le noeud parent
 * @value: Val nouveau noeud
 * Return: Pointeur vers le nouveau noeund
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    
    if (new_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }

    parent->right = new_node;

    return (new_node);
}

