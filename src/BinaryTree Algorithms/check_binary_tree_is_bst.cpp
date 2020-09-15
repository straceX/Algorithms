#include "check_binary_tree_is_bst.h"

#include "binary_tree.h"
#include "check_binary_search_tree.h"

auto check_binary_tree_is_bstv1(const BinaryTree::Node *root, int &pivotValue) 
	-> bool
	{
	if (!root) 
		return true;
	if (!check_binary_tree_is_bstv1(root->left, pivotValue))
		return false;
	
	if (root->data <= pivotValue)
		return false;
	pivotValue = root->data;

	if (!check_binary_tree_is_bstv1(root->right, pivotValue))
		return false;

	return true;
	}

auto check_binary_tree_is_bstv2(const BinaryTree::Node *root, int min = std::numeric_limits<int>::min(), int max = std::numeric_limits<int>::max()) 
	-> bool
	{
	if (!root) 
		return true;
	if(!(root->data > min && root->data < max))
		return false;

	if( !(check_binary_tree_is_bstv2(root->left, min, root->data) && check_binary_tree_is_bstv2(root->right, root->data, max)) )
		return false;

	return true;
	}