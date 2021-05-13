/**
 * Author: R-CO
 * E-mail: daniel1820kobe@gmail.com
 **/
#ifndef RCO_LEETCODE_SRC_EASY_110_BALANCED_BINARY_TREE_HPP
#define RCO_LEETCODE_SRC_EASY_110_BALANCED_BINARY_TREE_HPP

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
class Solution {
 public:
  bool isBalanced(TreeNode *root) {
    if (root == nullptr) { return false; }

    return false;
  }
};

#endif  // end of define RCO_LEETCODE_SRC_EASY_110_BALANCED_BINARY_TREE_HPP
