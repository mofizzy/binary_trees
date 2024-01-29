#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to assign  the new node.
 *
 * Return: If memory allocation fails - NULL.
 *         if successful - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *assigned_new_node = malloc(sizeof(binary_tree_t));

	if (assigned_new_node == NULL)
		return (NULL);

	assigned_new_node->n = value;
	assigned_new_node->parent = parent;
	assigned_new_node->left = NULL;
	assigned_new_node->right = NULL;

	return (assigned_new_node);
}
