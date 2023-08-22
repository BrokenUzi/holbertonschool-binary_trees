#include "binary_trees.h"

/**
* binary_tree_balance - measure balance of binary tree
* @tree: tree
* Return: balance value & 0 if NULL tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);

	balance = tree_height(tree->left) - tree_height(tree->right);

	return (balance);
}

/**
* tree_height - measures height of binary tree
* @tree: tree
* Return: integer height value of binary tree & 0 if NULL tree
*/

int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree)
		left = 1 + tree_height(tree->left);
	if (tree->right || tree)
		right = 1 + tree_height(tree->right);

	return (left > right ? left : right);
}
