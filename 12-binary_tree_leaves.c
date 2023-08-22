#include "binary_trees.h"

/**
* binary_tree_leaves - counts leaves in binary tree
* @tree: tree
* Return: leaf count
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleaf = 0, rleaf = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	lleaf = binary_tree_leaves(tree->left);
	rleaf = binary_tree_leaves(tree->right);

	return (lleaf + rleaf);
}
