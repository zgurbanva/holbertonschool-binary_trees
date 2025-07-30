#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree or 0 if tree is NULL
 */
static int height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h;
	int right_h;

	if (tree == NULL)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return (left_h - right_h);
}
