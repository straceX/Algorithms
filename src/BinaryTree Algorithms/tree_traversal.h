#pragma once
#include "binary_tree.h"

//Preorder (Root, Left, Right)
auto preorder(BinaryTree::Node *root) -> void;

//Inorder (Left, Root, Right)
auto inorder(BinaryTree::Node *root) -> void;

//Postorder (Left, Right, Root)
auto postorder(BinaryTree::Node *root) -> void;