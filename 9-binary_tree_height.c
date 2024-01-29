#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		r_height = 1 + binary_tree_height(tree->right);

	if (l_height >= r_height)
		return (l_height);

	return (r_height);
}
