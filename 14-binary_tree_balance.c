#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 1, r_height = 1;

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

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
