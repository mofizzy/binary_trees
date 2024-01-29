#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current, *parent;

	if (tree == NULL)
		return;

	current = tree;

	while (current != NULL)
	{
		if (current->left != NULL)
		{
			/* Traverse to the left child */
			current = current->left;
		}
		else if (current->right != NULL)
		{
			/* Traverse to the right child */
			current = current->right;
		}
		else
		{
			parent = current->parent;
			if (parent != NULL)
			{
				/* Update the parent's child pointer */
				if (parent->left == current)
					parent->left = NULL;
				else
					parent->right = NULL;
			}

			free(current);
			current = parent;
		}
	}
}
