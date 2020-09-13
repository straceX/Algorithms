#pragma once

struct BinaryTree::Node;
//Implementation of checking binary tree is binary search tree
auto check_binary_tree_is_bst(const BinaryTree::Node *root, int &pivotValue) -> bool;