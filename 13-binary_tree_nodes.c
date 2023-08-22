#include "binary_trees.h"

/**
* binary_tree_nodes - counts nodes in binary tree (min. 1 child)
* @tree: tree
* Return: node count in tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnode = 0, rnode = 0, nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes++;

	lnode = binary_tree_nodes(tree->left);
	rnode = binary_tree_nodes(tree->right);

	nodes += (lnode + rnode);

	return (nodes);
}
