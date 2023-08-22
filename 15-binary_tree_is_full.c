#include "binary_trees.h"

/**
* binary_tree_is_full - checks if binary tree is full
* @tree: tree
* Return: 1 if full & 0 if NULL tree/if tree has 1 node
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree ||
	    (!tree->left && tree->right) ||
	    (tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	full = binary_tree_is_full(tree->left) *
		binary_tree_is_full(tree->right);

	return (full);
}
