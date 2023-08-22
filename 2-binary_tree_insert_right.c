#include "binary_trees.h"

/**
* binary_tree_insert_right - insert node as right child of parent node
* @parent: right child node to be inserted under parent
* @value: value stored in new node
* Return: pointer to new node inserted at right below parent, NULL otherwise
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode = NULL;

	if (!parent)
		return (NULL);

	rnode = binary_tree_node(parent, value);
	if (!rnode)
		return (NULL);

	if (parent->right)
		parent->right->parent = rnode, rnode->right = parent->right;

	parent->right = rnode;

	return (rnode);
}
