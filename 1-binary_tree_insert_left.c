#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *assigned_new_node, *temp;

	/* Checking if the parent node is NULL*/
	if (parent == NULL)
		return (NULL);

	/* Creating a new node with the given value*/
	assigned_new_node = binary_tree_node(parent, value);
	if (assigned_new_node == NULL)
		return (NULL);

	/* If the parent already has a left child*/
	if (parent->left != NULL)
	{
		/* Store the reference to the current left child*/
		temp = parent->left;

		/* Set the new node as the left child of the parent */
		parent->left = assigned_new_node;

		/* Set the previous left child as the left child of the new node */
		assigned_new_node->left = temp;

		/* Update the parent of the previous left chil */
		temp->parent = assigned_new_node;
	}
	else
	{
		/**
		 * If the parent does not have a left child,
		 * simply set the new node as the left child
		 */
		parent->left = assigned_new_node;
	}

	/* Return a pointer to the newly created node */
	return (assigned_new_node);
}
