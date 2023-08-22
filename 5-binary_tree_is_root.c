#include "binary_trees.h"

/**
* binary_tree_is_root - checks if node is a root in binary tree
* @node: node in binary tree
* Return: 1 if node is root & 0 if NULL node/not root
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
