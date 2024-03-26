#include "binary_trees.h"

/**
* Insert a node as the left-child of another node.
* @parent: Pointer to the node to insert the left-child in.
* @value: Value to store in the new node.
*
* Returns: A pointer to the created node, or NULL on failure or if parent is NULL.
*/
binary_tree_t *insert_left_child(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return NULL;

    new_node = create_binary_tree_node(parent, value);

    if (new_node == NULL)
        return NULL;

    new_node->left = parent->left;
    if (parent->left != NULL)
        parent->left->parent = new_node;
    parent->left = new_node;
    return new_node;
}

