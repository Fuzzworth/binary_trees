#include "binary_trees.h"

/**
 * binary_tree_leaves - short description
 *
 * Description: long description
 *
 * @argument_1: argument_1 description
 * @argument_2: argument_2 description
 *
 * Return: return description
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	return (0 + binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right));
}
