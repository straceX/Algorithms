#pragma once

struct BinaryTree::Node;

//Implementation of checking binary tree is binary search tree

auto check_binary_tree_is_bstv1(const BinaryTree::Node *root, int &pivotValue) -> bool;

auto check_binary_tree_is_bstv2(const BinaryTree::Node *root, int min, int max) -> bool;