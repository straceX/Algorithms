#include "convert_sorted_array_to_bst.h"

auto convert_sorted_array_to_bst(const int arry[], const size_t size) 
	-> BinaryTree::Node*
	{
	if(!size)
		return nullptr;
	
	auto mid = (size - 1) / 2;
	auto root = new BinaryTree::Node;
    
	root->data  = arry[mid];
	root->left  = convert_sorted_array_to_bst(arry, mid);
	root->right = convert_sorted_array_to_bst(arry + mid + 1, size - mid - 1);    
	return root;
	}