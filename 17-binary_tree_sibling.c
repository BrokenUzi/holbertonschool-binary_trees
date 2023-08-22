#include "binary_trees.h"

/**
* binary_tree_sibling - finds sibling
* @node: node
* Return: pointer to sibling node/NULL ig not found/NULL input node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
