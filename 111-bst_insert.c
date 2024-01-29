#include "binary_trees.h"

/**
 * bst_insert - Inserts a value into a Binary Search Tree.
 * @tree: Double pointer to the root node of the BST.
 * @value: Value to store in the node to be inserted.
 *
 * Return: Pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{

	bst_t *new_node, *current, *parent;

	if (tree == NULL)
		return (NULL);
	current = *tree;
	parent = NULL;
	while (current != NULL)
	{
		parent = current;

		if (value == current->n)
			return (NULL);

		if (value < current->n)
			current = current->left;

		else
			current = current->right;
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)

	{
		*tree = new_node;
	}
	else if (value < parent->n)
	{
		parent->left = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}
