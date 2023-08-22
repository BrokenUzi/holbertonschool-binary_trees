#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if node is a leaf within the binary tree
* @node: node in binary tree
* Return: 1 if node is leaf, 0 if NULL node/not a leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
