#include "tree_traversal.h"

#include <iostream>

auto preorder(BinaryTree::Node *root)
	-> void
	{
	if(!root)
		return;
	std::cout << root->data << ' ';
	preorder(root->left);
	preorder(root->right);
	}

auto postorder(BinaryTree::Node *root)
	-> void
	{
	if(!root)
		return;
	postorder(root->left);
	postorder(root->right);
	std::cout << root->data << ' ';
	}

auto inorder(BinaryTree::Node *root)
	-> void
	{
	if(!root)
		return;
	inorder(root->left);
	std::cout << root->data << ' ';
	inorder(root->right);
	}
