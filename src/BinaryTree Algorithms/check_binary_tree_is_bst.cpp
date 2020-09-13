#include "check_binary_tree_is_bst.h"

#include "binary_tree.h"
#include "check_binary_search_tree.h"

auto check_binary_tree_is_bst(const BinaryTree::Node *root, int &pivotValue) 
	-> bool
	{
	if (!root) 
		return true;
	if (!check_binary_tree_is_bst(root->left, pivotValue))
		return false;
	
	if (root->data <= pivotValue)
		return false;
	pivotValue = root->data;

	if (!check_binary_tree_is_bst(root->right, pivotValue))
		return false;

	return true;
	}